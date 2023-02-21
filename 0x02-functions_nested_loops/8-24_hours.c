#include <unistd.h>
#include <stdio.h>

/**
 * jack_bauer - prints all minutes in 24 hrs
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h;
	int m;
	int zero = '0';
	int colon = ':';
	int newline = '\n';
	char buff[80];
	int len;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
			{
				write(1, &zero, 1);
			}
			len = sprintf(buff, "%d", h);
			write(1, buff, len);
			write(1, &colon, 1);
			if (m < 10)
			{
				write(1, &zero, 1);
			}
			len = sprintf(buff, "%d", m);
			write(1, buff, len);
			write(1, &newline, 1);
		}
	}
}
