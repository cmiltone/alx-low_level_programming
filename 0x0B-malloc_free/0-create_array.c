#include <stdlib.h>
/**
 * create_array - create char array and initialize it with a char
 *
 * @size: unsigned int
 * @c: char
 *
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
