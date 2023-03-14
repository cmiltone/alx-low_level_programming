#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the input string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned long int i;

	if (!str)
	{
		return (NULL);
	}
	s = malloc(strlen(str) * sizeof(char));

	if (!s)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
