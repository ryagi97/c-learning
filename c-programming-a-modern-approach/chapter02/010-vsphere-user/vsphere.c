/*
 * Name: vsphere.c
 * Purpose: Computes the volume of a sphere, whose radius is provided by the user
 * Author: Ryan Agius
 */

#include <stdio.h>

#define PI 22.f/7.f

int main(void)
{
    float radius;
    printf("Enter the radius of a sphere: ");
    scanf("%f", &radius);
    
    printf("A sphere with radius %.2f has volume %.2f\n", radius, (4.0f/3.0f) * PI * radius*radius*radius);
	return 0;
}

