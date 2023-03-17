#include <stdlib.h>

/**
 * array_range - allocates memory for an array, using malloc
 * @min: int
 * @max: int
 * Return: ponter
*/

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
