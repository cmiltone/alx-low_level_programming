#include <unistd.h>

/**
 * print_sign - prints sign of a number
 *
 * @n: the number
 *
 * Return: 0 if number is zero, 1 if number
 * is greater than zero or -1 if number is less than zero
 */
int print_sign(int n)
{
	int c;

	if (n == 0)
	{
		c = '0';
		write(1, &c, 1);
		return (0);
	} else if (n < 0)
	{
		c = '-';
		write(1, &c, 1);
		return (-1);
	} else if (n > 0)
	{
		c = '+';
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
