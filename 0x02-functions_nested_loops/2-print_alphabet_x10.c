#include <unistd.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	int c;
	int newline = '\n';

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			write(1, &c, 1);
		}
		write(1, &newline, 1);
	}
}
