#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - prints strings
 * @separator: character
 * @n: int, number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (separator != NULL && i < n - 1)
		{
			if (s != NULL)
				printf("%s%s", s, separator);
			else
				printf("(nill)%s", separator);
		}
		else
		{
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nill)");
		}
	}
	va_end(ap);
	printf("\n");
}
