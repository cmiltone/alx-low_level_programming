#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to decimal
 * @b: the binary form
 * Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
	int b2;
	char *end;

	if (b == NULL)
		return (0);

	b2 = strtol(b, &end, 2);

	if (strcmp(end, "1") > 0)
		b2 = 0;

	return (b2);
}
