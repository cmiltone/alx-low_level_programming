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

	a[0] = 0;
	a[1] = 1;

	for (n = 2; n <= 33; n++)
	{
		a[n] = a[n - 1] + a[n - 2];

		if (n < 33)
			printf("%ld, ", a[n]);
		else
			printf("%ld\n", a[n]);
	}
	return (0);
}
