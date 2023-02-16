/*
 * C Program To demonstrate
 * Size of operators
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %lu\n", sizeof(float));
	printf("%lu", sizeof(double));
	return (0);
}
