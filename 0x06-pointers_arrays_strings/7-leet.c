#include <string.h>
#include <stdlib.h>

/**
 * leet - encodes string to 1337
 *
 * @s: string
 *
 * Return: string
 */

char *leet(char *s)
{
	int n = strlen(s), i, c;
	char *s2;
	int arr[120] = { 0 };

	arr[65] = arr[97] = 4;
	arr[69] = arr[101] = 3;
	arr[79] = arr[111] = 0;
	arr[84] = arr[116] = 7;
	arr[76] = arr[108] = 1;

	s2 = s;
	for (i = 0; i < n; i++)
	{
		c = s[i];
		if (arr[c] != 0)
		{
			s2[i] = arr[c] + '0';
		}
	}

	strcpy(s, s2);

	return (s);
}
