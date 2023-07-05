/*
 * Name: stack.c
 * Description: push, pop functions for an int stack
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

#define MAXVAL 100  /* maximum depth of val stack */
int sp = 0;         /* next free stack position */
double val[MAXVAL]; /* the value stack */

/* push: push f onto value stack */
void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("ERROR: stack full, can't push");
}

/* pop: pop f from value stack */
double pop(void) {
    if (sp > 0)
        return val[--sp];
    else
        printf("ERROR: stack empty, can't pop");
    return -1;
}