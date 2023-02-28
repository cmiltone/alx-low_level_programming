#include <string.h>
#include <stdio.h>

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
	strcpy(dest, src);
	return (dest);
}
