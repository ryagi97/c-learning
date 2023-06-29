/*
 * name: pointers.c
 * purpose: basic declerations and use of pointers
 * author: ryagi <ryagius17@gmail.com>
 */

#include <stdio.h>

int main(void)
{
    int i = 42;
    int *p = NULL;

    p = &i;

    printf("int pointer p with address %p points to int i with value %d\n", p, *p);

    return 0;
}