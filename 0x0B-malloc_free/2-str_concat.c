#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: string
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i;
	char *s;

	s = malloc((strlen(s1) + strlen(s2)) * sizeof(char));

	if (!s)
	{
		return (NULL);
	}


	for (i = 0; i < strlen(s1); i++)
	{
		s[i] = s1[i];
	}

	for (i = strlen(s1); i < strlen(s1) + strlen(s2); i++)
	{
		s[i] = s2[i - strlen(s1)];
	}

	return (s);
}
