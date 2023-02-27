/*
 * Name: ftoc.c
 * Purpose: Converts a Fahrenheit temperature to Celsius
 * Author: Ryan Agius
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float temp_f, temp_c;

    printf("Enter a temperature (Fahrenheit): ");
    scanf("%f", &temp_f);

    temp_c = (temp_f - FREEZING_PT) * SCALE_FACTOR;
    printf("%.1f Fahrenheit --> %.1f Celsius\n", temp_f, temp_c);

    return 0;
}