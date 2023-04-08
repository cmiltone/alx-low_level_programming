#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - read and print file
 * @filename: the name of the input file
 * @letters: number of characters to read
 * Return: integer, number of characters read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t n = 0;
	char *c;
	int f;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	c = malloc(sizeof(char) * letters);

	if (c == NULL)
		return (0);

	read(f, c, letters);

	n = write(1, c, strlen(c));

	close(f);

	if (n != strlen(c) || (int)n == -1)
		return (0);

	free(c);

	return (n);
}
