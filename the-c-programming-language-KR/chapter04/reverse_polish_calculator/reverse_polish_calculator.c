/*
 * Name: reverse_polish_calculator.c
 * Description: A calculator using reverse polish notation
 * Author: Ryan Agius <ryagius17@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <ctype.h>

#define MAXOP 100   /* max size of operand or operator */
#define MAXVAL 100  /* maximum depth of val stack */
#define NUMBER '0'  /* signal that a number was found */
#define BUFSIZE 100  /* buffer size for string input */

void push(double number);   /* push a number on the stack */
double pop(void);           /* pop a number from the stack */
int getch(void);            /* get a character */
void ungetch(int);          /* push a character back to the input */
int getop(char string[]);   /* parse the input string */

int sp = 0;         /* next free stack position */
double val[MAXVAL]; /* the value stack */

char buf[BUFSIZE];  /* buffer for ungetch */
int bufp = 0;       /* next free position in buf */

/* reverse polish calculator */
int main(void) {

    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
        case NUMBER:
            push(atof(s));
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
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("ERROR: unknown command %s\n", s);
            return -1;
        }
    }
    return 0;
}

/* push: push f onto value stack */
void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("ERROR: stack full, can't push");
}

/* pop: pop f from value stack */
double pop(void) {
    if (sp > 0)
        return val[--sp];
    else
        printf("ERROR: stack empty, can't pop");
    return -1;
}

/* get a (possibly pushed back) character */
int getch(void)
{
    return (bufp > 0 ? buf[--bufp] : getchar());
}

/* push a charachter back on input */
void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters");
    else
        buf[bufp++] = c;
}

/* getop: get next operator or numeric operand */
int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;   /* not a number */
    i = 0;
    if (isdigit(c)) /* collect integer part */
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')   /* collect fraction part */
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}