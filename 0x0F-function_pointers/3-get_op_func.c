#include "3-calc.h"

/**
 * get_op_func - fxn pointer which chooses correct function to perform
 * operation asked by user
 * @s: operator given by user
 *
 * Return: a pointer the function which matches to
 * operator given as a parameter
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
	int y;

	y = 0;

	while (ops[y].op)
	{
		if (strcmp(ops[y].op, s) == 0)
			return (ops[y].f);
		y++;
	}

	return (NULL);
}
