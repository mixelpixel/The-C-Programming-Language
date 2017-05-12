/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */


/*
Prompts for an input and then captures a character
from the keyboard. If EOF is signalled (typically through a
control-D or control-Z character, though not necessarily),
the program prints 0. Otherwise, it prints 1.

If your input stream is buffered (and it probably is), then
you will need to press the ENTER key before the program will
respond.
*/

#include <stdio.h>

int main()
{
  printf("*************************************************************\n");
  printf("Press a key, some keys or a combination and then press ENTER.\n");
  printf("Ctrl+d will enter an EOF (ctrl+z on Win)  & ctrl+c will exit.\n");
  printf("*************************************************************\n\n");

  printf("*****************************************************************\n\
In this instance the expression 'getchar() != EOF' evaluated to %d\n", getchar() != EOF);
  printf("*****************************************************************\n");

  return 0;
}
