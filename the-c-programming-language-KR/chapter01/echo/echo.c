#include <stdio.h>

main()
{

    int c;
    int end = EOF;

    printf("%d\n\n", end);

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    


}