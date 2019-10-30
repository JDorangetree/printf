#include "holberton.h"
/**
 * p_string - Print string
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int p_reverse(va_list arguments, char *buffer, int i_b)
{
	int i = 0;
	int n = 0;
	char pointer;
	char *ptr = va_arg(arguments, char *);

	if (!ptr)
		ptr = "(null)";
	for (; ptr[i]; i++)
		pointer[i] = ptr[i];
	while (pointer[n] != '\0')
		n++;
	n--;
	while (n >= 0)
	{
		buffer[i_b] = pointer[n];
		n--;
		i_b++;
	}
	return (i_b);
}
