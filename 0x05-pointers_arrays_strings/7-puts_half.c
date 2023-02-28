#include <unistd.h>
#include <string.h>

/**
 * puts_half - prints half a string
 *
 * @str: string
 *
 * Return: void
 *
 */

void puts_half(char *str)
{
	int len  = strlen(str);
	int n, i, c, newline = '\n';

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	} else
	{
		n = len / 2;
	}
	for (i = len - n; i < len; i++)
  	{
		c = str[i];
		write(1, &c, 1);
	}
	write(1, &newline, 1);
}
