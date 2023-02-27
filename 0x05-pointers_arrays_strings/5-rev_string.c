#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len = strlen(s);
	char *s2;
	char a;

	s2 = malloc(len * sizeof(char));
	for (i = len - 1; i >= 0; i--)
	{
		a = s[i];
		s[(len - 1) - i] = *a;
	}

	s = s2;
}
