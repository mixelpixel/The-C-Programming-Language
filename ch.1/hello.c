                               //        per "The C programming Language" by
                               //   Brian W. Kernighan and Dennis M. Ritchie
                               //                Chapter 1.1 Getting Started
#include <stdio.h>             // include information about standard library
                               //              define a function called main
int main()                     //           that received no argument values
{                              //  statements of main are enclosed in braces
  printf("hello, world\n");    //         main calls library function printf
  return 0;
}                              //       to print this sequence of characters
                               //        \n represents the newline character


// C SYNTAX NOTE: these programs produce identical output:
// #include <stdio.h>
// main()
// {printf("hello, ");printf("world");printf("\n");}
//
// or
//
// #include <stdio.h>
// main()
// {
//   printf("hello, ");
//   printf("world");
//   printf("\n");
// }
