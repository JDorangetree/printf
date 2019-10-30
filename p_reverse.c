#include "holberton.h"
/**
<<<<<<< HEAD
 * p_string - Print string
=======
<<<<<<< HEAD
 * p_reverse - Print string reverse
=======
 * p_string - Print string
>>>>>>> 732b6ac49596a3d43809648b69c1974f8a68f89a
>>>>>>> 5b07cb02ac8bd682de83e13551f2297af7076497
 * @arguments: input string
 * @buffer: memory field to host the printf output
 * @i_b: buffer position
 *
<<<<<<< HEAD
 * Description: print number
=======
<<<<<<< HEAD
 * Description: print string reverse
=======
 * Description: print number
>>>>>>> 732b6ac49596a3d43809648b69c1974f8a68f89a
>>>>>>> 5b07cb02ac8bd682de83e13551f2297af7076497
 * Return: 0
 */
int p_reverse(va_list arguments, char *buffer, int i_b)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
	int n = 0;
	char *ptr = va_arg(arguments, char *);

	if (!ptr)
		ptr = ")llun(";
	n = _strlen(ptr) - 1;
	while (n >= 0)
	{
		buffer[i_b] = ptr[n];
=======
>>>>>>> 5b07cb02ac8bd682de83e13551f2297af7076497
	int i = 0;
	int n = 0;
	char pointer;
	char *ptr = va_arg(arguments, char *);

	if (!ptr)
		ptr = "(null)";
	for (; ptr[i]; i++)
		pointer[i] = ptr[i];
	while (pointer[n] != '\0')
		n++;
	n--;
	while (n >= 0)
	{
		buffer[i_b] = pointer[n];
<<<<<<< HEAD
=======
>>>>>>> 732b6ac49596a3d43809648b69c1974f8a68f89a
>>>>>>> 5b07cb02ac8bd682de83e13551f2297af7076497
		n--;
		i_b++;
	}
	return (i_b);
}
