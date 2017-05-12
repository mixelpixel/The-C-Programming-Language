#include <stdio.h>

/* count characters in input; 1st version */
int main(void)
{
    long nc; /* long type integers are at least 32 bits; int type integers may only be 16 bits */

    printf("Type in some characters, then press Enter, then ctrl+d to issue an EOF:\n");

    nc = 0;
    while (getchar() != EOF)
        /* same as nc = nc + 1 */
        ++nc;
    printf("%ld\n", nc); /* "ld" tells printf that it is using a long type integer */

    return 0;
}
