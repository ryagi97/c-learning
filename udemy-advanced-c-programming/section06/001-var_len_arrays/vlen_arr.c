/*
 * Name: vlen_arr.c
 * Description: small challenge using variable length arrays (VLAs)
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

int main(void)
{
    int size, i, sum;
    printf("Enter quantity of numbers to sum: ");
    scanf("%d", &size);

    int nums[size];
    for (i=0; i<size; i++) {
        printf("Enter the %d", i+1);

        switch (i+1) {
        case 1:
            printf("st ");
            break;
        case 2:
            printf("nd ");
            break;
        case 3:
            printf("rd ");
            break;
        default:
            printf("th ");
            break;
        }

        printf("number: ");
        scanf("%d", &nums[i]);
    }

    sum=0;
    for (i=0; i<size; i++)
        sum += nums[i];
    printf("Sum of all numbers entered = %d\n", sum); 

    return 0;
}
