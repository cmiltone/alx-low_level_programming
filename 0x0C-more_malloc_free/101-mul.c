#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

#ifndef MAIN_H
#define MAIN_H

void print_char(char c);
void print_error();
void _print_int(int n);

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
void print_error()
{
	print_char('E');
	print_char('r');
	print_char('r');
	print_char('o');
	print_char('r');
	print_char('\n');
}

/**
 * print_int - prints integer
 * @n: integer
 * Return: void
 */

void _print_int(int n)
{
	int l;
	char buff[1000000000000000000];

	l = sprintf(buff, "%d", n);
	write(1, buff, l);
}
