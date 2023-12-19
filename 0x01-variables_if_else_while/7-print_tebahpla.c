#include <stdio.h>

int main(void)
{
    char letter = 'z'; /* Starting letter: 'z' */

    while (letter >= 'a') /* Loop from 'z' down to 'a' */
    {
        putchar(letter); /* Print the current letter */
        letter--; /* Move to the previous letter */
    }

    putchar('\n'); /* Print a new line */

    return 0;
}
