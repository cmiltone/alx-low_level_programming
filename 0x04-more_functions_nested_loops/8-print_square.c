#include <unistd.h>
/**
 * print_square - prints a line
 *
 * @size: a number
 *
 * Return: void
 */

void print_square(int size)
{
	int k;
	int l;
	int hash = '#';
	int newline = '\n';

	if (size > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (l = 1; l <= size; l++)
			{
				write(1, &hash, 1);
			}
			write(1, &newline, 1);
		}
	} else
		write(1, &newline, 1);
}
