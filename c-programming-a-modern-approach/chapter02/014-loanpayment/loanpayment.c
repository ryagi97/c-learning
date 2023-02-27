/*
 * Name: loanpayment.c
 * Purpose: Computes remaining loan balance after first, second and third monthly payments
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void)
{
    float balance, interest_rate, monthly_payment;
    printf("Enter loan capital: $");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter montly payment: $");
    scanf("%f", &monthly_payment);

    printf("Balance remaining after first payment:  $%.2f\n", balance = (balance - monthly_payment) + balance * (interest_rate/100)/12);
    printf("Balance remaining after second payment: $%.2f\n", balance = (balance - monthly_payment) + balance * (interest_rate/100)/12);
    printf("Balance remaining after third payment:  $%.2f\n", balance = (balance - monthly_payment) + balance * (interest_rate/100)/12);

	return 0;
}
