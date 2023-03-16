#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenetes strings
 * @s1: stirng one
 * @s2: stirng two
 * Return: string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned long int size = 0, i;
	int k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size += strlen(s1);
	if (n <= strlen(s2))
		size += n;
	else
		size += strlen(s2);
	s = malloc(size * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i < strlen(s1))
			s[i] = s1[i];
		else
		{
			s[i] = s2[k];
			k += 1;
		}
	}
	return (s);
}
