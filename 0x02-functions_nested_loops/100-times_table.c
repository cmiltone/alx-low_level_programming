#include <stdio.h>
#include <unistd.h>

/**
 * print_times_table - prints n time table
 * @n: number
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int len;
	char buff[80];
	int comma = ',';
	int space = ' ';
	int newline = '\n';

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j > 0 && i *j < 100)
			{
				if (i *j < 10)
				{
					write(1, &space, 1);
					write(1, &space, 1);
				} else 
				{
					write(1, &space, 1);
				}
			}
			len = sprintf(buff, "%d", i *j);
			write(1, buff, len);
			if (j < n)
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
		}
		write(1, &newline, 1);
	}
}
