#include <string.h>

/**
 * _strncat - conctenates strings
 *
 * @dest: destination
 * @src: source
 * @n: integer, max number of bytes from src
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
