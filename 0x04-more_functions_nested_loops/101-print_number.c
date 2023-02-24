

#include <unistd.h>
/**
 * print_number - prints a number
 *
 * @n: a number
 *
 * Return: void
 */

void print_number(int n)
{
	int c, d, neg;

	if (n < 0)
	{
		n *= -1;
		neg = '-';
		write(1, &neg, 1);
	}

	if (n > 9)
	{
		d = n / 10;
		n -= 10 * d;

		print_number(d);
	}
	c = '0' + n;
	write(1, &c, 1);
}
