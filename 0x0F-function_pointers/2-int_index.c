#include <stddef.h>

/**
 * int_index - searches an integer
 * @array: the hay
 * @size: number of elements in the array
 * @cmp: pointer to a function for comparison
 * Return: the needle
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, return_int = -1;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (return_int);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (return_int);
}
