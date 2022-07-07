#include <stdio.h>

#define     LOWER   -40     // lower limit of the table
#define     UPPER   260     // upper limit
#define     STEP    20      // step size

/*
 * Print Celsius-Fahrenheit table
 *  for celsius = -40, 20, ..., 260
 */

int main()
{
    int celsius;

    for(celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("%3d\t%6.1f\n", celsius, (celsius * 9.0/5.0) + 32);
    }

    return 0;

}
