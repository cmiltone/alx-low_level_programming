#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc - number of arguments
 * @argv - array of arguments
 *
 * Return: always 0
 *
 */

int main(int argc, char **argv)
{
	char **s = malloc(argc * sizeof(char));

	s = argv;

	printf("%s\n", s[0]);
	return (0);
}
