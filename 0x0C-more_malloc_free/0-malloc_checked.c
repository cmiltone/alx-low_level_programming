#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: int
 *
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}