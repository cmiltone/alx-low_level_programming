#include <string.h>

/**
 * _strncpy - copies strings
 *
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
