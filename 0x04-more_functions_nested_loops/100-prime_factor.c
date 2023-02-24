#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	long int num = 612852475143, d = 2, max;

	while (num != 0)
	{
		if (num % d != 0)
		{
			d += 1;
		} else
		{
			max = num;
			num /= d;
			if (num == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}
	return (0);
}
