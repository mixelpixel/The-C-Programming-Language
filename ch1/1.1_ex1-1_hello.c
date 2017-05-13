// Exercise 1-1.
// Run the "hello, world" program on your system.
// Experiment with leaving out parts of the program,
// to see what error messages you get.

// to compile, $ cc 1.1_ex1-1_hello.c
// this will result in an executable file, a.out
// to execute the file, $ ./a.out

// See what error messages are invoked by removing the special
// characters one at a time, e.g. #, <, >, (, ), {, ;, }
// Try a different return value
// Try a different function type (char, long, double, float)
// Try mis spelling, etc...

#include <stdio.h>

int main()
{
  printf("hello, world\n");
  return 0;
}
