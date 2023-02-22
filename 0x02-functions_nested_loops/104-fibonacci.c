#include <stdio.h>

/**
 * fibonacci - prints fibonacci sequence
 *
 * @n: the number
 *
 * Return: void
 */

void fibonacci(int n)
{
	static unsigned long int a = 0, b = 1;
	unsigned long int c, h1, h2;
	unsigned long int a1, a2, b1, b2;

	if (n > 0)
	{
		c = a + b;
		a = b;
		b = c;
		if (n > 6)
		{
			if (n == 1)
				printf("%lu\n", c);
			else
				printf("%lu, ", c);
		} else
		{
			a1 = a / 10000000000;
			b1 = b / 10000000000;
			a2 = a % 10000000000;
			b2 = b % 10000000000;
			h1 = a1 + b1;
			h2 = a2 + b2;
			if (a2 + b2 > 9999999999)
			{
				h1 += 1;
				h2 %= 10000000000;
			}
			printf("%lu%lu, ", h1, h2);

			a1 = b1;
			a2 = b2;
			b1 = h1;
			b2 = h2;
		}

		fibonacci(n - 1);
	}
}

/**
 * main - entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 98;

	fibonacci(n);

	return (0);
}
