#include <stdlib.h>

/**
 * reverse_array - reverses an array
 *
 * @a: the array to reverse
 * @n: number of elements in the arr
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *a_copy, i;

	a_copy = malloc(n * sizeof(int));

	for (i = n - 1; i >= 0; i--)
	{
		a_copy[(n - 1) - i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = a_copy[i];
	}

	a = a_copy;
}
