#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string
 *
 * Return: string
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *c;

	c = strpbrk(s, accept);

	return (c);
}
