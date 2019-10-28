#include "holberton.h"
/**
 * get_type - Get type print function
 * @s: Parameter input
 *
 * Description: Get type print function
 * Return: Nothing
 */
void (*get_type(char *s))(va_list)
{
	t_i types[] = {
		{"%c", p_char},
		{"%s", p_string},
		{"%i", p_int},
		{"%d", p_decimal},
		{"\n", enter},
		{"\t", tab},
		{"%%", percent},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (types[i].letter)
	{
		if (types[i].letter[1] == s[0] && s[1] != '\0')
			return (types[i].f);
		i++;
	}
	return (NULL);
}
