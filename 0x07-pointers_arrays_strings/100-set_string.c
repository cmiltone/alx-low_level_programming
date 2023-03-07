#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: string
 * @to: string
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	strcpy(to, *s);
}
