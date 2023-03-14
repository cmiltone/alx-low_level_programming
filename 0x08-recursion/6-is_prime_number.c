#include <stdio.h>

/**
 * is_prime_number - returns 1 if a number is prime or 0 otherwise
 *
 * @n: the number
 *
 * Return: int
 */
int g = -1;
int is_prime_number(int n)
{
	if (g == -1)
	{
		g = n - 1;
	}
	if (n < 2)
	{
		g = -1;
		return (0);
	}

	if (g == 1)
	{
		g = -1;
		return (1);
	}
	if (n % g == 1)
	{
		g = -1;
		return (0);
	}

	g -= 1;
	
	return (is_prime_number(n));
}
