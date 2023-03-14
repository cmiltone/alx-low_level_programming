#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: int, number of arguments
 * @av: arguments
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		size += strlen(av[i]);
	}

	s = malloc((size + 1) * sizeof(char) + (ac + 1) * sizeof(char) + 2);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			s[k] = av[i][j];
			k += 1;
		}
		s[k] = '\n';
		k += 1;
	}

	return (s);
}
