/*
 * Name: area.c
 * Purpose: asks user rectangle dimensions, calculates area
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void)
{   
    double height, width;

    printf("Enter the rectangle's height: ");
    scanf("%lf", &height);
    printf("Enter the rectangle's width: ");
    scanf("%lf", &width);

    printf("Rectangle area = %.4lf\n", height * width);

    return 0;
}