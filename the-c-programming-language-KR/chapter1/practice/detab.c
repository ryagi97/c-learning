#include <stdio.h>

#define TABLEN 4

/* replace tabs with spaces */
int main()
{
    int i, c;

    while ((c = getchar()) != EOF && c != '\n')
        if (c == '\t') {
            for (i=0; i<TABLEN; ++i)
                putchar(' ');
        } else {
            putchar(c);
        }

}