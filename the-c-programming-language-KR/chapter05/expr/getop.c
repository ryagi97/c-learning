/*
 * Name: getop.c
 * Description: get next operator or numeric operand
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>
#include <ctype.h>
#include "calc.h"

/* getop: parse next operator or numeric operand */
/*return NUMBER if its a number, itself if not a number*/
int getop(char s[])
{
    if (!isdigit(*s) && *s != '.')
        return *s;   /* not a number */
    if (*s == '.' && !isdigit(*++s))    
        return BADNUMBER;   /* badly formatted real number */
    return NUMBER;  /* anything else must be a correctly formatted number */
}