/*
 * Name: upc.c
 * Purpose: asks user for an 11-digit barcode, computes the check digit
 * Author: Ryan Agius
 */

#include <stdio.h>

int main(void) {

    int d;
    int i1, i2, i3, i4, i5;
    int j1, j2, j3, j4, j5;
    int chksum;

    printf("Ener the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
            &d, &j1, &i1, &j2, &i2, &j3, &i3, &j4, &i4, &j5, &i5);

    chksum = (3 * (d+i1+i2+i3+i4+i5)) + j1+j2+j3+j4+j5;

    printf("Check digit: %d\n", 9 - ((chksum - 1) % 10));

    return 0;
}
