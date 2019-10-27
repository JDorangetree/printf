#ifndef HOLBERTON_H
#define HOLBERTON_H

//#define JUMP('') 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
void (*get_type(char *s))(va_list);
void p_char(va_list arguments);
void p_string(va_list arguments);
void p_int(va_list arguments);
void p_decimal(va_list arguments);
int _putchar(char c);
void enter(va_list arguments);
void tab(va_list arguments);
void percent(va_list arguments);
void print_number(int n);

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 *
 * Description: This is a longer description
 */
typedef struct t_input
{
	char *letter;
	void (*f)(va_list);
} t_i;

#endif
