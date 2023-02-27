/*
 * Name: polynomial.c
 * Purpose: Computes the value of a polynomial after the user enter the value for x
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void)
{
    float x;
    float equation_value;
    printf("Enter a value for x: ");
    scanf("%f", &x);
    
    equation_value =   3 * (x*x*x*x*x);
    equation_value +=  2 * (x*x*x*x);
    equation_value += -5 * (x*x*x);
    equation_value += -1 * (x*x);
    equation_value +=  7 * (x);
    equation_value +=  6;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6, where x = %f\n", x);
    printf("\t = 3(%f)^5 + 2(%f)^4 - 5(%f)^3 - (%f)^2 + 7(%f) - 6\n", x, x, x, x, x);
    printf("\t = %f\n", equation_value);
	return 0;
}
