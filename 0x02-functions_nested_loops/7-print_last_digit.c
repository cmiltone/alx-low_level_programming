#include <unistd.h>
#include <stdio.h>

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

	if (n >= 0)
	{
		l = n % 10;
	} else if (n < 0)
	{
		l = (n * -1) % 10;
	}
	len = sprintf(buff, "%d", l);
	write(1, buff, len);

	return (l);
}
