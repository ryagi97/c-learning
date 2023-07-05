/*
 * Name: scope.c
 * Description: messing with scopes
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    k = 8; 
    for (i = 0; i < 5; i++) {
        int k = 9;
        for (j = 0; j < 5; j++) {
            int k = 5;
            printf("k in the scope has value %d\n", k);
        }
    } 
    printf("k out of the scope has value %d\n", k);
    return 0;
}