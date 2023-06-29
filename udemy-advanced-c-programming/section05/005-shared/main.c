/*
 * Name: main.c
 * Description: shows variables shared accross files
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

int i;

extern void foo(void);

int main(void)
{
    for(i=0; i<5; i++)
        foo();
    return 0;
}