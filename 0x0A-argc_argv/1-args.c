#include <stdio.h>

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
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
