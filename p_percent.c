#include "holberton.h"

int percent(va_list arguments, char *buffer, int i_b)
{
	buffer[i_b] = '%';
	return(++i_b);
}
