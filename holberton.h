#ifndef HOLBERTON_H
#define HOLBERTON_H

#define SIZE 1024 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int (*get_type(char *s))(va_list arguments, char *buffer, int i_b);
int p_char(va_list arguments, char *buffer, int i_b);
int p_string(va_list arguments, char *buffer, int i_b);
int p_int(va_list arguments, char *buffer, int i_b);
int percent(va_list arguments, char *buffer, int i_b);
int print_number(int n, char *buffer, int i_b);
int _putchar(char c);

/**
 * struct t_input - Struct t_input
 * @letter: The class
 * @f: The function associated
 *
 * Description: This is a longer description
 */
typedef struct t_input
{
	char *letter;
	int (*f)(va_list arguments, char *buffer, int i_b);
} t_i;

#endif
