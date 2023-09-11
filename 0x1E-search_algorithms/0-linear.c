#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: the array of integers
 * @size: the lenth of the array
 * @value: the value to search
 * Return: first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = -1, i = 0;

	if (array == NULL)
	{
		return (index);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value) {
			index = i;
			break;
		}
	}
	return (index);
}
