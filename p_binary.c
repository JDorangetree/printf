#include "holberton.h"
char *print_binary(int n);
/**
 * p_binary - Print string
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int p_binary(va_list arguments, char *buffer, int i_b)
{
	int i, j = 0;
	char *ptr;

	i = va_arg(arguments, int);
	ptr = print_binary(i);

	for (; ptr[j]; j++, i_b++)
		buffer[i_b] = ptr[j];
	return (i_b);
}

/**
 * print_binary - Print %
 * @n: number for convert
  *
 * Description: return a binary
 * Return: 0
 */
char *print_binary(int n)
{
	int c, d, count, flag = 0;
	char *pointer, *cero = "0";

	count = 0;
	if (n == 0)
		return (cero);
	pointer = (char *)malloc(33);
	if (!pointer)
		exit(EXIT_FAILURE);
	for (c = 31; c >= 0; c--)
	{
		d = n >> c;
		if (d & 1)
			*(pointer + count) = 1 + '0';
		else
			*(pointer + count) = 0 + '0';
		count++;
	}
	*(pointer + count) = '\0';
	while (pointer)
	{
		if (*pointer != '0')
			flag = 1;
		if (flag == 1)
			return (pointer);
		pointer++;
	}
	free(pointer);
	return (pointer);
}
