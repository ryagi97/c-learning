/*
 * Name: getint.c
 * Description: get next integer from input
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{   
    int ret, *pn;

    while (1)   {
        ret = getint(pn);
        if (ret > 0)
            printf("Entered number is: %d\n", *pn);
        else
            printf("ERROR: not a valid number\n");
    }
    
    return 0;
}

/* getint: get next integer from input into *pn */
int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch()))    /* skip whitespace */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);     /* c is not a number */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-') 
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
