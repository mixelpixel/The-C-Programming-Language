/*
read a character
    while (character is not end-of-file indicator)
        output the character just read
        read a character
*/

#include <stdio.h>

/* copy input to output; 2nd version */
int main()
{
    int c; /* We must declare c to be a type big enough to hold any
              value that getchar returns. We can't use char since c
              must be big enough to hold EOF in addition to any
              possible char. Therefore we use int. */

    while((c = getchar()) != EOF)
        putchar(c);

}
