/*
 * Name: main.c
 * Description: small showcase of storage classes
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

/* global double accessible only from this file */
static double val = 3.1415;

/* global float accessible by the entire program */
/* assuming program is over multiple files */
extern double val;

/* function only accessible within this file */
static void foo(void) 
{
    /* int variable with a block scope and temporary storage */
    int i = 4;
    printf("auto int variable i contains value %d\n", i);
}

int main(void)
{
    /* float local variable with permanent storage */
    static int j = 5;

    /* register int variable */
    register int k = 12;

    foo();

    return 0;
}