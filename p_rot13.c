#include "holberton.h"
#include <stdio.h>
/**
 * p_rot13 - Print root 13
 * @arguments: list of arguments passed to printf
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print roo13
 * Return: 0
 */

int p_rot13(va_list arguments, char *buffer, int i_b)
{
	int i = 0, j;
	char *p = va_arg(arguments, char *);
	char *ptr;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	ptr = malloc(_strlen(p) + 1);
	while (p[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (p[i] == alpha[j])
			{
				ptr[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	i = 0;
	for (; ptr[i]; i++, i_b++)
		buffer[i_b] = ptr[i];
	free(ptr);
	return (i_b);
}
