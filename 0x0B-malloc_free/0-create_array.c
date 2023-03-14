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
	if (size == 0)
	{
		return (NULL);
	}
	char *ptr = malloc(size * sizeof(char));
	unsigned int i;

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
