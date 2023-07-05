/*
 * Name: reversestr.c
 * Description: reverses a string in place
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>
#include <strings.h>

#define MAXLEN 128  /* maximum string length */

int total_strlen(char string[]);
void reverse_str(char string[], int first, int last);
void swap(char string[], int pos1, int pos2);

int main(void)
{
    char string[MAXLEN];
    int len;

    printf("Enter a string: ");
    scanf("%s", string);

    len = total_strlen(string);

    reverse_str(string, 0, len-1);
    printf("The reversed string is: %s\n", string);

}

/* return total string lenght, including whitespace */
int total_strlen(char string[])
{
    int len = 0;
    while (string[len++])
        ;
    return len-1;
}

/* reverse a string in-place */
/* swap the first and last elements, then truncatw */
void reverse_str(char string[], int first, int last)
{
    if (first >= last)  /* we have reached or surpassed the middle of the string */
        return;
    swap(string, first, last);
    reverse_str(string, ++first, --last);
}

/* swaps two characters in a string at positions x, y */
void swap(char string[], int x, int y)
{
    char tmp = string[x];
    string[x] = string[y];
    string[y] = tmp;
}