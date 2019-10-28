#include "holberton.h"
/**
 * p_char - Print characters
 * @format: Parameter input
 *
 * Description: Print characters
 * Return: 0
 */
int p_char(va_list arguments, char *buffer, int i_b)
{
	buffer[i_b] = va_arg(arguments, int);
	return (++i_b);
}
