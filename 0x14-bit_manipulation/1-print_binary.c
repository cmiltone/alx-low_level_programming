#include <unistd.h>

/**
 * print_binary - prints binary
 * @n: number
*/
void print_binary(unsigned long int n)
{
	int i;
	int k;
	char c;

	if (n == 0)
	{
		c = '0';
		write(1, &c, 1);
		return;
	}

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			c = '1';
			write(1, &c, 1);
		}	else if (k > 0)
		{
			c = '0';
			write(1, &c, 1);
		}
	}
}