#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: string
 *
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
	int len = strlen(s);
	char newline = '\n';
	char c = s[0];
	char *s2 = malloc(len * sizeof(char));

	if (len == 0)
	{
		write(1, &newline, 1);
		return;
	}

	write(1, &c, 1);

	memcpy(s2, &s[1], len - 1);

	s2[len - 1] = '\0';

	_puts_recursion(s2);
}
