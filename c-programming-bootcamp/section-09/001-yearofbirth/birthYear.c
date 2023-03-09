/*
 * Name: birthYear.c
 * Purpose: asks user for their age, calculater year they were born
 * Author: Ryan Agius
 */

#include <stdio.h>
#include <time.h>

#define YEAR_OFFSET 1900

int main(void)
{
    int age;
    time_t timer;
    
    timer = time(NULL);
    struct tm* current_time = localtime(&timer); 

    printf("How old are you? ");
    scanf("%d", &age);

    printf("You were born in the year %d or %d\n", YEAR_OFFSET + current_time->tm_year - age,
     YEAR_OFFSET + current_time->tm_year - age - 1);

    return 0;
}