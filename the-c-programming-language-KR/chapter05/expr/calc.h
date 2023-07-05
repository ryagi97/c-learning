
#ifndef CALC_H
#define CALC_H

#define NUMBER '0'      /* signal that a number was found */
#define BADNUMBER '$'   /* signal that a badly formatted number is found */

void push(double number);   /* push a number on the stack */
double pop(void);           /* pop a number from the stack */
int getop(char string[]);   /* parse the input string */

#endif