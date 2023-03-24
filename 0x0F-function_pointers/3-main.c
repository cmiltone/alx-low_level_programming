#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int (*func)(int, int), result;

	if (argc != 4)
	{
		printf("Error %d\n", argc);
		exit(98);
	}

	if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0
		|| strcmp(argv[2], "*") == 0 || strcmp(argv[2], "/") == 0
		|| strcmp(argv[2], "%") == 0)
	{
		if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
			&& atoi(argv[3]) == 0)
		{
			printf("Error\n");
			exit(100);
		}
		func = get_op_func(argv[2]);
		result = func(atoi(argv[1]), atoi(argv[3]));

		printf("%d\n", result);
	} else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
