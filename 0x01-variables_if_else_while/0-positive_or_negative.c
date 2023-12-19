#include <stdlib.h>
#include <time.h>
/* more headers go here */

/**
 * main - Entry point
 *
 * Description: Generates a random number, prints it,
 * and classifies its sign
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Your code goes here */
    
    return (0);
}
