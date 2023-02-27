#include <string.h>
#include <unistd.h>

/**
 * print_rev - prints a string in reverse order
 *
 * @s: the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len  = strlen(s), i;
	char c;
	int newline = '\n';

	for (i = len - 1; i >= 0; i--)
	{
		c = s[i];
		write(1, &c, 1);
	}
	write(1, &newline, 1);
}
