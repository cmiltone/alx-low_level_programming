#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	long int a[34];
	long int sum = 0;

	a[0] = 0;
	a[1] = 1;

	for (n = 2; n <= 33; n++)
	{
		a[n] = a[n - 1] + a[n - 2];
		if (a[n] % 2 == 0)
			sum += a[n];
	}
	printf("%ld\n", sum);
	return (0);
}
