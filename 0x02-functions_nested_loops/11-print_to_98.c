#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 *
 * @n: the starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;
	int comma = ',';
	int space = ' ';
	int len;
	char buff[80];
	int newline = '\n';

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			len = sprintf(buff, "%d", i);
			write(1, buff, len);
			if (i != 98)
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
		}
	} else if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			len = sprintf(buff, "%d", i);
			write(1, buff, len);
			if (i != 98)
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
		}
	}
	write(1, &newline, 1);
}
