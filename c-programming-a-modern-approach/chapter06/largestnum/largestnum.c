/*
 * Name: largestnum.c
 * Purpose: Gets a series of numbers from the user, and prints largest one
 * Author: Ryan Agius
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    float number = __FLT_MIN__;
    float largest = __FLT_MIN__;
    
    do {
        printf("Enter a number: ");
        scanf("%f", &number);

    if (number > largest)
        largest = number;

    } while (number != 0);
    
    printf("The largest number entered was %f\n", largest);
    
    return 0;
}