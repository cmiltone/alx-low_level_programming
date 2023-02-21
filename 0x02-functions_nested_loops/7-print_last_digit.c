#include <unistd.h>
#include <stdio.h>
#include <limits.h>

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
	char buff[80];
	int len;
	unsigned int k = n < 0 ? UINT_MAX - ((unsigned int)(n)) + 1U
		: (unsigned int)(n);

	l = k % 10;
	len = sprintf(buff, "%d", l);
	write(1, buff, len);

	return (l);
}
