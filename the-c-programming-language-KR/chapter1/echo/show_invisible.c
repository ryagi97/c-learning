#include <stdio.h>

/*
 * Print invisible characters
 */

main()
{
    int c;

    while ((c = getchar()) != '\n') {
        if (c == '\t') {
            putchar('\\');
            c = 't'; 
        }   
        if (c == '\b') {
            putchar('\\');
            c = 'b';
        }
        if (c == '\\'){
            putchar('\\');
            c = '\\';
        }
        putchar(c);
    }
    

}