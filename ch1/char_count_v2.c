#include <stdio.h>

/* counting characters in input (includes newline); 2nd version - using a for loop */
int main(void)
{
    double nc;

    printf("Type some characters, then Enter and ctrl+d to issue an EOF:\n");

    for (nc = 0; getchar() != EOF; ++nc)
        /* "... the grammatical rules of C require that a for statement have a body.
        The isolated semicolon, called a null statement,
        is there to satisfy that requirement." */
        ;
        printf("Including the newline from Enter, the number of characters input: %.0f\n", nc);
}
