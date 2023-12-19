#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar(num + '0'); /* Print numbers from 0 to 9 */

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter); /* Print lowercase letters from 'a' to 'f' */

	putchar('\n'); /* Print a new line */

	return (0);
}
