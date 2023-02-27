/*
 * Name: dweight2.c
 * Purpose: Computes the dimensional weight of a box with dimensions provided by the user
 * Author: Ryan Agius
 */

#include <stdio.h>

#define CUBIC_INCHES_PER_POUND 166

int main(void)
{
	int length, width, height, volume, weight;

	printf("Enter the height (inch) of the box: ");
	scanf("%d", &height);
	printf("Enter the length (inch) of the box: ");
        scanf("%d", &length);
	printf("Enter the width (inch) of the box: ");
        scanf("%d", &width);
	printf("\n");
	
	volume = length * width * height;
	weight = (volume + CUBIC_INCHES_PER_POUND - 1) / CUBIC_INCHES_PER_POUND;

	printf("Dimensions: %dx%dx%d inches\n", length, width, height);
	printf("Volume: %d cubic inches\n", volume);
	printf("Dimensional weight: %d pounds\n", weight);

	return 0;
}
