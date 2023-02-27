/*
 * Name: amountsplit.c
 * Purpose: Computes how to pay an amount entered by the user using the least amount of bills
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void)
{
    int amount, num_20, num_10, num_5, num_1;
    printf("Enter a dollar amount: $");
    scanf("%d", &amount);

    // for least amount of bills, start with the largest
    num_20 = amount / 20;
    amount = amount % 20;

    num_10 = amount / 10;
    amount = amount % 10;
    
    num_5 = amount / 5;
    num_1 = amount % 5;

    printf("$20 bills: %d\n", num_20);
    printf("$10 bills: %d\n", num_10);
    printf(" $5 bills: %d\n", num_5);
    printf(" $1 bills: %d\n", num_1);

	return 0;
}
