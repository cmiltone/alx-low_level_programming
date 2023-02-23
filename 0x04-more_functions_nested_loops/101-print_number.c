#include <unistd.h>
#include <stdio.h>
/**
 * print_number - prints a number
 *
 * @n: a number
 *
 * Return: void
 */

void print_number(int n)
{
	int len;
	char buff[80];

	len = sprintf(buff, "%d", n);
	write(1, buff, len);
}
