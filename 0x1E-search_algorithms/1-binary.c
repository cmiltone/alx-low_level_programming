#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: the array of integers
 * @size: the lenth of the array
 * @value: the value to search
 * Return: first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t index = -1, left = 0, right = size - 1, m, i;

	if (array == NULL)
	{
		return (index);
	}

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		
		printf("%d\n", array[i]);

		m = floor((left + right) / 2);
		if (array[m] < value)
		{
			left = m + 1;
		} else if (array[m] > value)
		{
			right = m - 1;
		} else
			return (m);
	}

	return (index);
}
