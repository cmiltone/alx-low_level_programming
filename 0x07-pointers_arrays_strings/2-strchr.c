#include <string.h>

/**
 * _strchr - locates character in string
 *
 * @s: string
 * @c: character
 *
 * Return: string
 *
 */

char *_strchr(char *s, char c)
{
	char *f;

	f = strchr(s, c);

	return (f);
}
