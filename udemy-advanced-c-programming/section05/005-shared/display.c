/*
 * Name: display.c
 * Description: contains a function to display text on a console
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

void foo(void)
{
    extern int i;
    printf("Hello! %d\n", i+1);
}