/*
 * Name: extern.c
 * Description: Displays use of the extern keyword for vairables
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

int extVar = 100;

void foo(void);

int main(void)
{
	printf("extVar: %d\n", extVar);
	foo();
	printf("extVar: %d\n", extVar);
	return 0;
}
