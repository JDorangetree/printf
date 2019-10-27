#include "holberton.h"

void p_char(va_list arguments)
{

	int n = va_arg(arguments, int);
	void *p;
	
	p = &n;
	write(1, (char *) p, 1);
}

void p_string(va_list arguments)
{
	char *ptr = va_arg(arguments, char *);
	int n = strlen(ptr);


	write(1, ptr, n);
}

void p_int(va_list arguments)
{
	print_number(va_arg(arguments, int));
}

void p_decimal(va_list arguments)
{
	print_number(va_arg(arguments, int));
}

