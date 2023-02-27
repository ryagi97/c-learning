/*
 * Name: dweight.c
 * Purpose: Computes the dimensional weight of a 12" x 10" x 8" box
 * Author: Ryan Agius
 */

#include <stdio.h>

#define CUB_IN_PER_LB

int main(void)
{
	int length, width, height, volume, weight;
	
	length = 12;
	width = 10;
	height = 8;
	volume = length * width * height;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d inches\n", length, width, height);
	printf("Volume: %d cubic inches\n", volume);
	printf("Dimensional weight: %d pounds\n", weight);

	return 0;
}
