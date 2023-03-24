#include <stddef.h>
#include "function_pointers.h"
#include "3-calc.h"
#include "string.h"

/**
 * get_op_func - gets operation function
 * @s: string
 *
 * Return: int
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
	int i;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
