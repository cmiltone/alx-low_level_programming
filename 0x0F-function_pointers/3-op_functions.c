#include <stddef.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - gets operation function
 * @a: int
 * @b: int
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

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}

	return (NULL);
}