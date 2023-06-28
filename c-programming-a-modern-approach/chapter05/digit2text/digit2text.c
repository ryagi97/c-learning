/*
 * Name: digit2text.c
 * Purpose: Converts a two digit number to text
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void)
{   
    int n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    int tens, ones;
    tens = n/10;
    ones = n%10;

    printf("You entered the number ");

    // first handle the range 10-19
    switch (n) {
        case 10: printf("ten.\n");
            return 0;
        case 11: printf("eleven.\n");
            return 0;
        case 12: printf("twelve.\n");
            return 0;
        case 13: printf("thriteen.\n");
            return 0;
        case 14: printf("fourteen.\n");
            return 0;
        case 15: printf("fifteen.\n");
            return 0;
        case 16: printf("sixteen.\n");
            return 0;
        case 17: printf("seventeen.\n");
            return 0;
        case 18: printf("eighteen.\n");
            return 0;
        case 19: printf("nineteen.\n");
            return 0;
    }

    switch (tens) {
        case 2: printf("twenty-");
            break;
        case 3: printf("thirty-");
            break;
        case 4: printf("forty-");
            break;
        case 5: printf("fifty-");
            break;
        case 6: printf("sixty-");
            break;
        case 7: printf("seventy-");
            break;
        case 8: printf("eighty-");
            break;
        case 9: printf("ninety-");
            break;
        default:
            break;
    }

    // then handle all the others
        switch (ones) {
        case 1: printf("one");
            break;
        case 2: printf("two");
            break;
        case 3: printf("three");
            break;
        case 4: printf("four");
            break;
        case 5: printf("five");
            break;
        case 6: printf("six");
            break;
        case 7: printf("seven");
            break;
        case 8: printf("eight");
            break;
        case 9: printf("nine");
            break;
        default:
            break;
    }

    printf(".\n");

    return 0;
}