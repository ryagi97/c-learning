/*
 * Name: digitcount.c
 * Purpose: Counts the number of digits in an integer
 * Author: Ryan Agius
 */

#include <stdio.h>

int get_digits(int n) 
{
    int i = 0;
    if (n < 0)
        n *= -1;
    while (n > 0) {
        n /= 10;
        i++;
    }
    return i;
}

int main(void) 
{   
    int n = 12345722;
    int i = get_digits(n);

    printf("%d has %d digits\n", n, i);
    return 0;
}