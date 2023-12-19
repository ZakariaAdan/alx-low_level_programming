#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number, prints it, and classifies its sign
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d ", n); /* Prints the random number generated */

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n < 0)
    {
        printf("is negative\n");
    }
    else
    {
        printf("is zero\n");
    }

    return (0);
}
