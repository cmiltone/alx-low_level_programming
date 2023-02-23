#include <unistd.h>
#include <stdio.h>

/**
 * print_numbers - prints digits
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;
	int newline = '\n';
	int len;
	char buff[80];

	for (n = 0; n <= 9; n++)
	{
		len = sprintf(buff, "%d", n);
		write(1, buff, len);
	}
	write(1, &newline, 1);
}
