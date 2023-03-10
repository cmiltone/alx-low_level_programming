#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array or arguments
 *
 * Return: always zero
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	(void)argv;

	return (0);
}
