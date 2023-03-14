#include <string.h>
#include <stdlib.h>

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

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}


	if (s1 != NULL && s2 != NULL)
	{
		s = malloc((strlen(s1) + strlen(s2)) * sizeof(char));
		for (i = 0; i < strlen(s1); i++)
		{
			s[i] = s1[i];
		}
		
		for (i = strlen(s1); i < strlen(s1) + strlen(s2); i++)
		{
			s[i] = s2[i - strlen(s1)];
		}
	}
	if (s1 != NULL && s2 == NULL)
	{
		s = malloc(strlen(s1) * sizeof(char));
		for (i = 0; i < strlen(s1); i++)
		{
			s[i] = s1[i];
		}
	}
	if (s2 != NULL && s1 == NULL)
	{
		s = malloc(strlen(s2) * sizeof(char));
		for (i = 0; i < strlen(s2); i++)
		{
			s[i] = s2[i];
		}
	}

	return (s);
}
