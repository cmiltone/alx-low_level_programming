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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
