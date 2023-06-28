/*
 * Name: sudoku.c
 * Description: Generates a completed sudoku puzzle
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

#define GRID_SIZE 9

int sudoku[GRID_SIZE][GRID_SIZE];

void zero_grid(int array[GRID_SIZE][GRID_SIZE])
{
    for (int i=0; i<GRID_SIZE; i++) {
        for (int j=0; j<GRID_SIZE; j++)
            array[i][j] = 0;
    }
}

void display_grid(int array[GRID_SIZE][GRID_SIZE])
{
    for (int i=0; i<GRID_SIZE; i++) {
        for (int j=0; j<GRID_SIZE; j++)
            printf("(%d, %d) = %d\n", i, j, array[i][j]);
    }
}

void generate_puzzle(int array[GRID_SIZE][GRID_SIZE])
{

    
}

int main(void)
{
    zero_grid(sudoku);
    display_grid(sudoku);

    return 0;
}