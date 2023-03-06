#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 *
 * Return: integer
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r;

	r = strspn(s, accept);

	return (r);
}
