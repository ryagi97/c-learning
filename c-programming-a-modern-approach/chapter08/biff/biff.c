/*
 * Name: biff.c
 * Purpose: translates text to `biff speak`
 * Author: Ryan Agius
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_MESSAGE_LEN 1024

int main(void)
{

    char message[MAX_MESSAGE_LEN];
    int i, j;

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);  // read string

    for (i=0; message[i] != '\n'; i++) {
        // make all letters uppercase
        message[i] = toupper(message[i]);

        // and change some letters to numbers
        switch (message[i]) {
        case 'A': message[i] = '4'; break;
        case 'B': message[i] = '8'; break;
        case 'E': message[i] = '3'; break;
        case 'I': message[i] = '1'; break;
        case 'O': message[i] = '0'; break;
        case 'S': message[i] = '5'; break;
        default:
            break;
        }
    }

    // and add a bunch of exclemation marks
    for (j=0; j<7; j++) {
        message[i++] = '!';
    }
    message[++i] = '\0';

    printf("In B1FF-speak: %s\n", message);

    return 0;
}