/*
 * Name: auto.c
 * Description: shows use of the auto keyword
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>

int main(void) 
{
	/* local variable */
	/* only visible within this scope */
	int x;

	return 0;
}

int foo(void)
{
	/* local variable */
	/* only visible within this scope */
	auto int y;
	return y;
}
