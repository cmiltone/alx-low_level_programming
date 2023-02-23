#include <unistd.h>
/**
 * print_triangle - prints a triangle
 *
 * @n: size of triangle
 *
 * Return: void
 */

void print_triangle(int n)
{
	int k;
	int l;
	int hash = '#';
	int space = ' ';
	int newline = '\n';

	if (n > 0)
	{
		for (k = 1; k <= n; k++)
		{
			for (l = 0; l < n - k; l++)
			{
				write(1, &space, 1);
			}
			for (l = n - k; l < n; l++)
			{
				write(1, &hash, 1);
			}
			write(1, &newline, 1);
		}
	} else
		write(1, &newline, 1);
}
