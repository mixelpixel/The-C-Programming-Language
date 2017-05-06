// int main() & return 0 per modern C standard (I think)
// see: http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
// see: http://stackoverflow.com/a/83763/5225057
// see: https://stackoverflow.com/questions/43819099/how-to-not-invoke-warning-type-specifier-missing
// differences between K&R and C99
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
