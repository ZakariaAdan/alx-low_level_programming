#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	start = 0;
	end = length - 1;

	/* Swap characters from start to end until reaching the middle */
	while (start < end)
	{
		/* Swap characters */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move indices towards the center */
		start++;
		end--;
	}
}

