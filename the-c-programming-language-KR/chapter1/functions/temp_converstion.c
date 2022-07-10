#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table
 *  for fahr = 0, 20, ..., 300
 */

int fahr2cel(int fahr);

int fahr2cel(int fahr)
{
    return (5 * (fahr-32) )/ 9;
} 

int main()
{
    int fahr;
    float celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;

    printf("  F \t   C  \n");
    printf("---------------\n");

    while (fahr <= upper) {
        
        printf("%3d\t%6d\n", fahr, fahr2cel(fahr));
        fahr += step;
    } 
}