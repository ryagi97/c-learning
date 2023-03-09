/*
 * Name: reversal.c
 * Purpose: asks user for a number, returns it in octal form
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void)
{
    int num, num_oct=0, n=1;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    while (num) {
        num_oct += (num%8) * n;
        num /= 8;
        n *= 10;
    }

    printf("In octal, your number is %.5d\n", num_oct);

    return 0;
}