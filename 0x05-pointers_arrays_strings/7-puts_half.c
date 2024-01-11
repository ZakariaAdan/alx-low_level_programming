#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting index for printing the second half */
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}

	/* Print the second half of the string */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
