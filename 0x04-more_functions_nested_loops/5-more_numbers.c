#include <unistd.h>
#include <stdio.h>

/**
 * more_numbers - prints digits
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int k;
	int newline = '\n';
	int len;
	char buff[80];

	for (n = 0; n < 10; n++)
	{
		for (k = 0; k <= 14; k++)
		{
			len = sprintf(buff, "%d", n);
			write(1, buff, len);
		}

		write(1, &newline, 1);
	}
}
