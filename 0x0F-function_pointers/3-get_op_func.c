#include "3-calc.h"
#include <string.h>
#include <stdlib.h>


/**
 * get_op_func - gets the corrsponding opfunc
 * to the char passed to it
 * @s: operator
 *
 * Return: a pointer to the adequate oper func
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	int (*ptr)(int, int);

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			ptr =  (ops[i].f);
		}
		i++;
	}

	return ptr;
}
