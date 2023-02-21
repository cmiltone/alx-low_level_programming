#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	long int a[52];

	for (n = 1; n <= 51; n++)
	{
		if (n == 1)
		{
			a[n] = 1;
			a[n + 1] = 1;
		} else if (n > 2)
		{
			a[n] = a[n - 1] + a[n - 2];
		}
		if (n < 51)
			printf("%ld, ", a[n]);
		else
			printf("%ld\n", a[n]);
	}
	return (0);
}
