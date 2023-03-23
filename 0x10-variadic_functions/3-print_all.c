#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: indicates atring of data types
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int d;
	float f;
	char c, *s, *frmt = (char *)format;

	va_start(ap, format);
	while (*frmt)
	{
		switch (*frmt++)
		{
		case 'c':
			c = va_arg(ap, int);
			printf("%c", c);
			break;
		case 'i':
			d = va_arg(ap, int);
			printf("%d", d);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(ap, char *);
			printf("%s", s);
			break;
		default:
			break;
		}
		if (*frmt != '\0' && (*frmt == 'c' || *frmt == 'i'
			|| *frmt == 'f' || *frmt == 's'))
			printf(", ");
	}
}
