/* My first C program! */
                               //        per "The C programming Language" by
                               //   Brian W. Kernighan and Dennis M. Ritchie
                               //                Chapter 1.1 Getting Started
#include <stdio.h>             // include information about standard library
                               //              define a function called main
int main()                     //           that received no argument values
{                              //  statements of main are enclosed in braces
  printf("Hello, world!\n");    //         main calls library function printf
  return 0;
}                              //       to print this sequence of characters
                               //        \n represents the newline character
                               //   NOTE: declaring function return type and
                               //     setting the function's return value is
                               //                               not in K&R C

/* C SYNTAX NOTE: these programs produce identical output:

#include <stdio.h>
main()
{printf("hello, ");printf("world");printf("\n");}

or

#include <stdio.h>
main() {
  printf("hello, ");
  printf("world");
  printf("\n");
}

Exercise 1-1. Run the "hello, world" program on your system.
              Experiment with leaving out parts of the program,
              to see what error messages you get.
Exercise 1-2. Experiment to find out what happens when prints's argument string contains \c,
              where c is some character not listed above.

*/
