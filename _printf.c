#include "holberton.h"
/**
 * _printf - Print function
 * @format: Parameter input
 *
 * Description: Print inputs
 * Return: 0
 */
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
			write(1, ptr, 1);
		else
		{
			ptr_f = get_type(++ptr);
			if (!ptr_f && format[i] == 92 && (format[i + 1] != 'n' ||
			format[i + 1] != 't'))
			{
				_putchar(92);
				--i;
			}
			else
				ptr_f(arguments);
			i++;
		}
		i++, ptr++;
	}
	va_end(arguments);
	return (0);
}
