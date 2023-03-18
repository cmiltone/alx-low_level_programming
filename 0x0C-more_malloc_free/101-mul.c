#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#ifndef MAIN_H
#define MAIN_H

void print_char(char c);
void print_error(void);
void _print_int(int n);
char *int_to_string(int n);
char *strrev(char *str);

#endif
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of values
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error();
		exit(98);
	}
	if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
	{
		print_error();
		exit(98);
	}
	_print_int(atoi(argv[1]) * atoi(argv[2]));
	print_char('\n');
	return (0);
}

/**
 * print_char - prints character
 * @c: character
 * Return: void
 */
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_error - prints error string
 * Return: void
 */
void print_error(void)
{
	print_char('E');
	print_char('r');
	print_char('r');
	print_char('o');
	print_char('r');
	print_char('\n');
}

/**
 * int_to_string - converts integer to string
 * @n: integer
 * Return: string
 */

char *int_to_string(int n)
{
	int i, sign;
	char *s;

	s = malloc(n * sizeof(char));
	if (s == NULL)
		return ("");

	sign = n;
	if (sign < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	strrev(s);
	return (s);
}

/**
 * print_int - prints integer
 * @n: integer
 * Return: void
 */

void _print_int(int n)
{
	char *s = int_to_string(n);
	int i, l = strlen(s);

	for (i = 0; i < l; i++)
	{
		print_char(s[i]);
	}
}

/**
 * strrev - reverse string
 * @str - the string
 * Return: string
*/

char *strrev(char *str)
{
	char *p1, *p2;

	if (!str || !*str)
	return (str);
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return (str);
}
