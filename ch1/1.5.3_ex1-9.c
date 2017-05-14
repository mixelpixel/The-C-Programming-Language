// Exercise 1-9. Write a program to copy its input to its output,
//               replacing each string of one or more blanks by a
//               single blank.

#include <stdio.h>

int main(void)
{
    int blank_state, blank_count;
    int c;

    printf("This program will replace any string of blanks with a single blank.\n");
    printf("To exit the while loop, use ctrl+d to insert an EOF after typing ENTER.\n\n");

    blank_state = 0;
    blank_count = 0;
    while ( (c = getchar()) != EOF )
    {
        if (c == ' ')
        {
            ++blank_count;
            if (blank_state == 0)
            {
                blank_state = 1;
                putchar(c);
            }
        }
        if (c != ' ')
        {
            blank_state = 0;
            putchar(c);
        }
    }

    printf("Total number of blanks: %d\n", blank_count);

    return 0;
}

// Look at your program as a machine that moves between different
// states as it iterates over the input.
//
// It reads the input one character at a time.
// If it sees anything other than a blank, it just prints the character it sees.
// If it sees a blank, it shifts to a different state.
// In that state, it prints one blank, and then doesn't print blanks if it sees them.
// Then, it continues reading the input, but ignores all blanks it sees--
// until it hits a character that isn't a blank,
// at which point it shifts back to the first state.
//
// (This concept is called a finite state machine, by the way,
// and a lot of theoretical computer science work has gone into
// what they can and can't do. Wikipedia can tell you more,
// though in perhaps more complicated detail than you're looking for. ;))
