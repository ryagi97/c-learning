#include <stdio.h>

/*
 * prints numbers, replacing multiples of 3 and 5 with fizz and buzz
 */

int main()
{
    int i;
    for (i = 1; i < 20; ++i) {
        if (i % 3 && i % 5)
            printf("%d", i);

        if (i % 3 == 0)
            printf("fizz");

        if (i % 5 == 0)
            printf("buzz");

        printf("\n");
        
    }

}