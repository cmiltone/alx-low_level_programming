#include <stdio.h>
#include <unistd.h>

/**
 * times_table - prints 9 time table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int len;
	char buff[80];
	int comma = ',';
	int space = ' ';
	int newline = '\n';

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > 0 && i * j < 10)
			{
				write(1, &space, 1);
			}
			len = sprintf(buff, "%d", i * j);
			write(1, buff, len);
			if (j < 9)
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
		}
		write(1, &newline, 1);
	}
}
