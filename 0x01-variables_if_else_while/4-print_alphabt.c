#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c != 'Q' && c != 'E')
		{
			putchar(tolower(c));
		}
	}
	putchar('\n');
	return (0);
}
