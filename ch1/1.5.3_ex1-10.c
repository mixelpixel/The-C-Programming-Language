// Exercise 1-10. Write a program to copy its input to its output,
//        replacing each tab by \t, each backspace by \b, and each
//        backslash by \\. This makes tabs and backspaces visible
//        in an unambiguous way.

#include <stdio.h>

/* NOTE: macOS ctrl+h for "backspace" */
int main(void)
{
    int c;
    int finite_state;

    while ( (c = getchar()) != EOF ) {
        finite_state = 0;
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            finite_state = 1;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            finite_state = 1;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            finite_state = 1;
        }
        if (finite_state == 0)
            putchar(c);
    }
}
