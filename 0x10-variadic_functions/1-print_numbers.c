#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - prints integers
 * @separator: character
 * @n: int, number of integers
 * Return: integer, the sum
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
