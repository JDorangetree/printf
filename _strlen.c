/**
 * _strlen - Get the string lenght
 * @string: Input to evaluate
 *
 * Description: Get the lenght of the string
 * passed.
 * Return: The lenght number
 */
int _strlen(char *string)
{
	int n = 0;

	while (string[n] != '\0')
		n++;
	return (n);
}
