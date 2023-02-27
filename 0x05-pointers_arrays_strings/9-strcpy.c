#include <string.h>

/**
 * _strcpy - copies string
 *
 * @dest: destination
 * @src: source
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);
	return (dest);
}
