#include <string.h>

/**
 * _strcat - conctenates strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
