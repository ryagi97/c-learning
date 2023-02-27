/*
 * Name: taxcalc.c
 * Purpose: Computes the total plus tax of an amount provided by the user
 * Author: Ryan Agius
 */

#include <stdio.h>

#define TAX 0.05

int main(void)
{
    float amount;
    printf("Enter an amount: $");
    scanf("%f", &amount);
    
    printf("With tad added: $%.2f\n", amount + TAX*amount);
	return 0;
}
