/*
 * Name: vsphere.c
 * Purpose: Computes the volume of a sphere
 * Author: Ryan Agius
 */

#include <stdio.h>

#define PI 22.f/7.f

int main(void)
{
    int radius = 10;
    printf("A sphere with radius %d has volume %.2f\n", radius, (4.0f/3.0f) * PI * radius*radius*radius);
	return 0;
}
