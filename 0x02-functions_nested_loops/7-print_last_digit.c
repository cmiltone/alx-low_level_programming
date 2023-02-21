#include <unistd.h>

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: the number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
		l = n % 10;
		write(1, &l, 1);
	} else if (n < 0)
	{
		l = (n * -1) % 10;
		printf("%d", l);
	}

	return (l);
}
