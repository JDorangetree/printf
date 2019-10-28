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
	int i = 0, i_b = 0;
	char *ptr = (char *) format, *buffer;
	int (*ptr_f)(va_list, char *, int);
	va_list arguments;

	va_start(arguments, format);
	buffer = malloc(sizeof(char) * SIZE);
	if (!buffer)
		return(1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			buffer[i_b] = format[i];
			i_b++;
		}
		else
		{
			ptr_f = get_type(++ptr);
			i_b = ptr_f(arguments, buffer, i_b);
			i++;
		}
		i++, ptr++;
	}
	va_end(arguments);
	write (1, buffer, i_b);
	free(buffer);
	return (i_b);
}
