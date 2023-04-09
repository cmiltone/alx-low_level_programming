#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_rev - reverse string
 * @s: string;
 * Return: void
*/

void str_rev(char *s)
{
	int i, len = strlen(s), tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

/**
 * binary_to_uint - converts binary to decimal
 * @b: the binary form
 * Return: decimal
*/
unsigned long int binary_to_uint(const char *b)
{
	unsigned long int b2;
	char *end;

	if (b == NULL)
		return (0);

	b2 = strtol(b, &end, 2);

	if (strcmp(end, "1") > 0)
		b2 = 0;

	return (b2);
}


/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 * Return: number
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	char *b = malloc(sizeof(char) * 1024);
	int bits[1024], i, k;

	if (b == NULL)
		return (-1);

	if (*n == 0)
	{
		bits[0] = 0;
		b[0] = bits[0] + '0';
	}

	for (i = 31; i >= 0; i--)
	{
		k = *n >> i;
		if (k & 1)
		{
			bits[i] = 1;
			if ((int)index == i)
				bits[i] = 0;
			b[i] = bits[i] + '0';
		}	else
		{
			bits[i] = 0;
			if ((int)index == i)
				bits[i] = 0;
			b[i] = bits[i] + '0';
		}
	}

	str_rev(b);

	*n = binary_to_uint(b);

	return (1);
}
