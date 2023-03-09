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
		g = n / 2;
	}
	if (g == 1)
	{
		return (1);
	} else
	{
		if (n % g == 0)
		{
			return (0);
		} else
		{
			g -= 1;
			is_prime_number(n);
		}
	}
	
	return (1);
}
