#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0'); /* Print the digit */

		if (digit < 9)
		{
			putchar(','); /* Print the comma */
			putchar(' '); /* Print the space */
		}

		digit++;
	}

	putchar('\n'); /* Print a new line */

	return (0);
}
