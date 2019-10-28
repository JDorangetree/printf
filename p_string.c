#include "holberton.h"

int p_string(va_list arguments, char *buffer, int i_b)
{
	int i = 0;
	char *ptr = va_arg(arguments, char *);

	for (; ptr[i]; i++, i_b++)
		buffer[i_b] = ptr[i];
	return(i_b);
}
