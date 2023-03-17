#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: ponter
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = calloc(nmemb, size);
	if (arr == NULL)
		return (NULL);
	
	return (arr);
}
