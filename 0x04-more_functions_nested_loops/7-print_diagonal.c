#include <unistd.h>
/**
 * print_diagonal - prints a line
 *
 * @n: a number
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int k;
	int l;
	int backslash = '\\';
	int space = ' ';
	int newline = '\n';

	if (n > 0)
	{
		for (k = 1; k <= n; k++)
		{
			for (l = 0; l < k; l++)
			{
				write(1, &space, 1);
			}
			write(1, &backslash, 1);
			write(1, &newline, 1);
		}
	} else
		write(1, &newline, 1);
}
