#include "holberton.h"

int p_int(va_list arguments, char *buffer, int i_b)
{
	return(print_number(va_arg(arguments, int), buffer, i_b));
}
