/*
 * Name: randomwalk.c
 * Purpose: randomly walks around an array
 * Author: Ryan Agius
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define DIRECTIONS 4

int main(void)
{
    char array[ROWS][COLS];
    char step = 'A';
    bool valid_directions[DIRECTIONS] = {0}; // up, down, right, left
    int i, j, n, num_valid, direction, direction_index;

    // initialisation
    for (i=0; i<ROWS; i++) {
        for (j=0; j<COLS; j++) {
            array[i][j] = '.';
        }
    }
    
    // start the walk
    i = 0;
    j = 0;
    array[i][j] = step++;

    while (step <= 'Z') {
        for (n=0; n<DIRECTIONS; n++)
            valid_directions[n] = false;
        
        // check which directions are valid
        if (i+1 < ROWS && array[i+1][j] == '.')
            valid_directions[0] = true;
        if (i-1 >= 0 && array[i-1][j] == '.')
            valid_directions[1] = true;
        if (j+1 < COLS && array[i][j+1] == '.')
            valid_directions[2] = true;
        if (j-1 <= 0 && array[i][j-1] == '.')
            valid_directions[3] = true;

        num_valid = 0;
        for (n=0; n<DIRECTIONS; n++)
            num_valid += valid_directions[n];

        // break if no valid directions
        if (num_valid == 0)
            break;
        
        // else choose a direction, and put a char there
        direction_index = 0;
        direction = rand() % num_valid;

        for (n=0; n < DIRECTIONS; n++) {
            if (valid_directions[n])
                direction_index++;
            if (direction_index == direction)
                break;
        }
        
        if (n == 0)
            array[++i][j] = step++;
        if (n == 1)
            array[--i][j] = step++;
        if (n == 2)
            array[i][++j] = step++;
        if (n == 3)
            array[i][--j] = step++;
        
    }   

    // print the array
    for (i=0; i<ROWS; i++) {
        for (j=0; j<COLS; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}