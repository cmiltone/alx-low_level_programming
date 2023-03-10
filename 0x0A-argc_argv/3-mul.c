#include <stdio.h>
#include <stdlib.h>

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
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	(void)argv;

	return (0);
}
