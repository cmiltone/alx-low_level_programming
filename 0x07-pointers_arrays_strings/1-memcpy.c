#include <string.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
