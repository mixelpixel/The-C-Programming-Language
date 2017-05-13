// Exercise 1-2.
// Experiment to find out what happens when printf's argument string
// contains \c, where c is some character not listed in Section 2-3.

#include <stdio.h>

int main()
{
  printf("hello,\c world\n");
  return 0;
}

// From Section 2.3:
// The complete set of escape sequences is
// \a - alert (bell) character
// \b - backspace
// \f - formfeed
// \n - newline
// \r - carriage return
// \t - horizontal tab
// \v - vertical tab
// \\ - backslash
// \? - question mark
// \' - single quote
// \" - double quote
// \ooo - octal number
// \xhh - hexadecimal number
// The character constant '\0' represents the character with value zero, the null character.
// '\0' is often written instead of 0 to emphasize the character nature of some expression,
// but the numeric value is just 0.
