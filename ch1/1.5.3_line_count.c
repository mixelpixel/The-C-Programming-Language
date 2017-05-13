#include <stdio.h>

/* Displays a count of the number of lines in an input */
int main(void)
{
    int c, nl;

    printf("This program will count how many lines you've entered.\n");
    printf("To exit, use ctrl+d to insert an EOF after typing ENTER to exit the while loop.\n\n");

    nl = 0;
    while ( (c = getchar()) != EOF )
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
    return 0;
}
