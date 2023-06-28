/*
 * Name: sum.c
 * Description: finds the sum of various numbers
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

int sum(int num)
{
    static int val = 0;
    return val += num;
}

int main(void)
{
    printf("%d ", sum(25));
    printf("%d ", sum(15));
    printf("%d \n", sum(30));
    return 0;
}