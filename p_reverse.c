#include "holberton.h"
/**
 * p_reverse - Print string reverse
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print string reverse
 * Return: 0
 */
int p_reverse(va_list arguments, char *buffer, int i_b)
{
	int n = 0;
	char *ptr = va_arg(arguments, char *);

	if (!ptr)
		ptr = "(null)";
	n = _strlen(ptr);
	while (n >= 0)
	{
		buffer[i_b] = ptr[n];
		n--;
		i_b++;
	}
	return (i_b);
}
