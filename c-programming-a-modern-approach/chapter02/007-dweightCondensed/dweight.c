/*
 * Name: dweight.c
 * Purpose: Computes the dimensional weight of a 12" x 10" x 8" box
 * Author: Ryan Agius
 */

#include <stdio.h>

#define CUB_IN_PER_LB

int main(void)
{
	int length = 12, width = 10, height = 8, volume, weight;
	volume = length * width * height;

	printf("Dimensions: %dx%dx%d inches\n", length, width, height);
	printf("Volume: %d cubic inches\n", volume);
	printf("Dimensional weight: %d pounds\n", (volume + 165) / 166);
	return 0;
}
