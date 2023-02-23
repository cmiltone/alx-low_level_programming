#include <unistd.h>
#include <stdio.h>

/**
 * print_most_numbers - prints digits
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;
	int newline = '\n';
	int len;
	char buff[80];

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			len = sprintf(buff, "%d", n);
			write(1, buff, len);
		}
	}
	write(1, &newline, 1);
}
