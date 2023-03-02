#include <string.h>
#include <stdlib.h>

/**
 * string_toupper - converts string to uppercase
 *
 * @s: string
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int diff = 32, n = strlen(s), i;
	char *s2 = malloc(n * sizeof(char));
	int c;

	for (i = 0; i < n; i++)
	{
		c = s[i];

		if (c >= 97 && c <= 122)
		{
			s2[i] = s[i] - diff;
		} else
		{
			s2[i] = s[i];
		}
	}
	strcpy(s, s2);

	return (s);
}
