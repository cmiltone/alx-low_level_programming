#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int a[51];

	for (n = 1; n <= 50; n++)
	{
		if (n == 1)
		{
			a[n] = 1;
			a[n + 1] = 1;
		} else if (n > 2)
		{
			a[n] = a[n - 1] + a[n - 2];
		}
		if (n < 50)
			printf("%d, ", a[n]);
		else
			printf("%d\n", a[n]);
	}
	return (0);
}
