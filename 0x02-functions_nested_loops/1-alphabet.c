
#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
}
