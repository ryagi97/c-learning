/*
 * Name: reversal.c
 * Purpose: asks user for a number, and reverses it
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void) {

    int num, tmp, rev_num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    tmp = num;
    while (tmp) {
        rev_num = rev_num*10 + tmp%10;
        tmp /= 10;
    }

    printf("The reverse of %d is %d\n", num, rev_num);

    return 0;
}
