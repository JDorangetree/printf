#include "holberton.h"
#include <stdio.h>
#include <limits.h>


int _printf(const char *format, ...)
{
	int i = 0;
	char *ptr = (char *)format;
	void (*ptr_f)(va_list);			 
	va_list arguments;

	va_start(arguments, format);

	while (format[i])
	{
		if (format[i] != '%' && format[i] != 92)
		{
			write(1, ptr, 1);
		}
		if (format[i] == 92 && format[i + 1] == 92)
		{
			_putchar(92);
			i++, ++ptr;
		}
		else
		{
			ptr_f = get_type(++ptr);
			ptr_f(arguments);
			i++;
		}
		i++,ptr++;
	}
	va_end(arguments);

	return (0);
	
}

void (*get_type(char *s))(va_list)
{
	t_i types[] = {
		{"%c", p_char},
		{"%s", p_string},
		{"%i", p_int},
		{"%d", p_decimal},
		{"\n", enter},
		{"\t", tab},
		{"%%", percent},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (types[i].letter)
	{
		if (types[i].letter[1] == s[0])
			return (types[i].f);
		i++;
	}
	return (NULL);
}




int main(void)
{
	int x = 20923;
	
	_printf("HHH \\ %i\n", x);
	printf("HHH \\ %i\n", x);
	return(0);
}
