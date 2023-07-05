#include <stdio.h>

/*
 * Replaces multiple blanks in an input with a single one
 */

main()
{
    int c;
    int cnt_blank = 0;

    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            ++cnt_blank;
        } else {
            cnt_blank = 0;
        }

        if (cnt_blank <= 1) 
            putchar(c);
    }
    

}