#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: string
 *
 * Return: void
 *
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	char c = s[0];
	char *s2 = malloc(len * sizeof(char));

	if (len == 0)
	{
		return;
	}

	memcpy(s2, &s[1], len - 1);

	s2[len - 1] = '\0';

	_print_rev_recursion(s2);

	write(1, &c, 1);
}
