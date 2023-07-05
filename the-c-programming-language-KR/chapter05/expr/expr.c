/*
 * Name: expr.c
 * Description: reverse polsih calculator, uses arguments
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/* reverse polish calculator */
int main(int argc, char *argv[]) {

    int type;
    double op2;

    while (--argc) {
        type = getop(*++argv);
        switch (type) {
        case NUMBER:
            push(atof(*argv));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '%':
            op2 = pop();
            push((int)pop() % (int)op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else {
                printf("ERROR: zero divisor!\n");
                return -1;
            }
            break;
        case BADNUMBER:
            printf("ERROR: badly formatted number %s\n", *argv);
            return -1; 
        default:
            printf("ERROR: unknown command %s\n", *argv);
            return -1;
        }
    }
    printf("\t%.8g\n", pop());
    
    return 0;
}
