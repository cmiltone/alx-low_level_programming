#include <unistd.h>
/**
 * print_line - prints a line
 *
 * @n: a number
 *
 * Return: void
 */

void print_line(int n)
{
	int k;
	int underscore = '_';
	int newline = '\n';

	if (n > 0)
	{
		for (k = 1; k <= n; k++)
		{
			write(1, &underscore, 1);
		}
	}
	write(1, &newline, 1);
}
