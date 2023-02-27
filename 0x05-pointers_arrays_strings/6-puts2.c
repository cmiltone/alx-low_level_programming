#include <string.h>
#include <unistd.h>

/**
 * puts2 - print every other char in string
 *
 * @str: string
 *
 * Return: void
 *
 */

void puts2(char *str)
{
	int i;
	int newline = '\n';
	char c;
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		c = str[i];
		write(1, &c, 1);
	}
	write(1, &newline, 1);
}
