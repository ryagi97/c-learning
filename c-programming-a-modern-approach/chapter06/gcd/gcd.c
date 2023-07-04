/*
 * Name: gcd.c
 * Purpose: Gets two integeres, and finds their greatest common divisor
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void)
{
    int num1, num2;
    int m, n, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        m = num1;
        n = num2;
    }
    else {
        m = num2;
        n = num1;
    }

     
    for (;;) {
        remainder = m % n;
        if (remainder == 0)
            break;
        m = n;
        n = remainder;   
    }
    printf("Greatest common divisor is %d\n", n);

    return 0;
}