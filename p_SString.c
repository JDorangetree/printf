#include "holberton.h"
int Hexa(char s, char *buffer, int i_b);
/**
 * p_Sstring - Print string
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: print number
 * Return: 0
 */
int p_Sstring(va_list arguments, char *buffer, int i_b)
{
	int i = 0;
	char *ptr = va_arg(arguments, char *);

	if (!ptr)
		ptr = NULL;
	while(ptr[i])
	{
		if ((ptr[i] > 0 && ptr[i] < 32) || ptr[i] >= 127)
		{
			i_b = Hexa(ptr[i], buffer, i_b), i++;
		}
		else
			buffer[i_b] = ptr[i], i_b++,i++;
			
	}
	return (i_b);
}

/**
 * Hexa - Print hexadecimal
 * @s: char to print in hexa
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
 * Description: Print hexadecimal
 * Return: 0
 */
int Hexa(char s, char *buffer, int i_b)
{
	int i, j = 0, remainder = 0;
	char hexadecimal[2] = {0, 0};

	buffer[i_b] = 92;
	i_b++;
	buffer[i_b] = 120;
	i_b++;
	if (s == 0)
		hexadecimal[j++] = 48;
	while (j < 2)
	{
		remainder = s % 16;
		if (remainder < 10)
			hexadecimal[j++] = 48 + remainder;
		else
			hexadecimal[j++] = 55 + remainder;
		s = s / 16;
	}
	for (i = j; i > 0; i--, i_b++)
		buffer[i_b] = hexadecimal[i - 1];
	return (i_b);
}
