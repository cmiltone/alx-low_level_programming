#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * cap_string - capitalize string
 *
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i, len = strlen(s), diff = 32;
	char *s2;
	char c;

	s2 = malloc(len * sizeof(char));

	c = s[0];

	if (c >= 97 && c <= 122)
	{
		s2[0] = s[0] - diff;
	} else
	{
		s2[0] = s[0];
	}

	for (i = 1; i < len; i++)
	{
		c = s[i - 1];
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (c == 32 || c == 9 || c == 10 || c == 44 || c == 59 ||
					c == 46 || c == 33 || c == 63 || c == 34 ||
					c == 40 || c == 41 || c == 123 || c == 125)
			{
				s2[i] = s[i] - diff;
			} else
			{
				s2[i] = s[i];
			}
		} else
		{
			s2[i] = s[i];
		}
	}

	strcpy(s, s2);

	return (s);
}
