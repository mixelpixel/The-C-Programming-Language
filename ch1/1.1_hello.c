// My first C program!
// per "The C programming Language" by
// Brian W. Kernighan and Dennis M. Ritchie
// Chapter 1.1 Getting Started

#include <stdio.h>

int main(void)
{
  printf("Hello, world!\n");
  return 0;
}


//               NOTE: declaring function return type,
// explicitly stating main is VOID of input parameters
//          and setting the function's return value is
//                                       not in K&R C.

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

*/
