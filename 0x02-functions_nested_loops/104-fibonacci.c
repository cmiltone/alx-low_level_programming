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
	unsigned long int c;

	if (n > 0)
	{
		c = a + b;
		a = b;
		b = c;

		if (n == 1)
			printf("%lu\n", c);
		else
			printf("%lu, ", c);
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
	fibonacci(n - 2);

	return (0);
}
