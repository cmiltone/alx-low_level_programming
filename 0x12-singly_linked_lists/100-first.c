#include <stdio.h>
void print_before_main(void) __attribute__ ((constructor));
/**
 * print_before_main - prints some string before main executes
 * Return: void
*/

void print_before_main(void)
{
	char *s1 = "You're beat! and yet, you must allow,";
	char *s2 = "\nI bore my house upon my back!\n";

	printf("%s%s", s1, s2);
}
