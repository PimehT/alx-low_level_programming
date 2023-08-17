#ifndef _3_CALC_H
#define _3_CALC_H

#include <stdlib.h>

/**
 * struct op - basic calculator
 * @op: arithmetric operation
 * @f: function to execute operation
 *
 * Description: Carries out basic calculations
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif

