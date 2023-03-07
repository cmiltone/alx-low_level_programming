#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 *
 * @a: matrix
 * @size: integer
 *
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += a[i * size + j];
			}
		}
	}
	printf("%d, ", sum);
	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j == (size - 1))
			{
				sum += a[i * size + j];
			}
		}
	}
	printf("%d\n", sum);
}
