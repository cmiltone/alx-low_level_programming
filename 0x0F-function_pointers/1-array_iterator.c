#include <stdlib.h>

/**
 * array_iterator - iterates through an array
 * @array: the array
 * @size: array length
 * @action: function pointer to be called on each element of array
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
}
