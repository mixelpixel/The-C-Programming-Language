/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.

Program prompts for an input and then captures a character
from the keyboard. If EOF is signalled (typically through a
control-D or control-Z character, though not necessarily),
the program evaluates a comparison of the keyboard
charcter(s) (?) to EOF and prints 0 if it is FALSE that
getchar() does not (!=) equal EOF. Otherwise, it prints 1
because it is TRUE that getchar() does not equal EOF.

If your input stream is buffered (and it probably is), then
you will need to press the ENTER key before the program will
respond.
*/

#include <stdio.h>

int main()
{

  int c;

  printf("*******************************************************\n");
  printf("Press a key or a sequence of keys and then press ENTER.\n");
  printf("Or, press ctrl+d. Press ctrl+z, or ctrl+c to EXIT.\n");
  printf("*******************************************************\n\n");

  c = getchar();

  printf("*****************************************************************\n");
  printf("In this instance the value of EOF is %d and getchar() is %d\n\n", EOF, c);
  printf("*****************************************************************\n\
...and therefore the expression 'getchar() != EOF' evaluates to %d\n", c != EOF);
  printf("*****************************************************************\n");
  printf("...and 'getchar() = EOF' evaluates to %d\n", c = EOF);
  printf("*****************************************************************\n");

  return 0;
}
