// Exercise 1-9. Write a program to copy its input to its output,
//               replacing each string of one or more blanks by a
//               single blank.

#include <stdio.h>

/* Copy input to output, replace each string of blanks with one blank */
int main(void)
{
    int blanks;
    int c;

    printf("This program will count replace any string of blanks,with a single blank.\n");
    printf("To exit, use ctrl+d to insert an EOF after typing ENTER to exit the while loop.\n\n");

    blanks    = 0;
    while ( (c = getchar()) != EOF ) {
        if (c == ' ')
            ++blanks;
    }

    return 0;
}
