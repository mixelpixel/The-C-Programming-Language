// Exercise 1-9. Write a program to copy its input to its output,
//               replacing each string of one or more blanks by a
//               single blank.

#include <stdio.h>

/* Displays a count of the number of blanks, tabs and new lines in an input */
int main(void)
{
    int blanks, tabs, new_lines;
    int c;

    printf("This program will count how many blanks, tabs and new lines you've entered.\n");
    printf("To exit, use ctrl+d to insert an EOF after typing ENTER to exit the while loop.\n\n");

    blanks    = 0;
    tabs      = 0;
    new_lines = 0;
    while ( (c = getchar()) != EOF ) {
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++new_lines;
    }
    printf("You entered %d blanks, %d tabs, and %d new_lines.\n", blanks, tabs, new_lines);

    return 0;
}
