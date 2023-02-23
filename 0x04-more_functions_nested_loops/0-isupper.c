#include <ctype.h>

/**
 * _isupper - checks if charter is uppercase
 *
 * @c: - int
 *
 * Return: returns 1 if uppercase or 0 otherwise
 *
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	} else
	{
		return (0);
	}
	return (0);
}

