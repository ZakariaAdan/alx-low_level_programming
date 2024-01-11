#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] != '\0')  /* Print only if the next character is not '\0' */
			i += 2;  /* Skip to every other character */
		else
			break;  /* Exit loop if the next character is '\0' */
	}

	_putchar('\n');
}

