#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * main - entry point, copies content of one file to another
 * @argc: number of args
 * @argv: the list of files
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int f1, f2, n;
	char *from, *to, c[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = argv[1];
	to = argv[2];

	f1 = open(from, O_RDONLY);
	n = read(f1, c, 1024);

	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	f2 = open(to, O_RDWR | O_TRUNC | O_CREAT, 0664);

	n = write(f2, c, strlen(c) - 1);

	if (n == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}

	n = close(f1);

	if (n == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f1);
		exit(99);
	}
	n = close(f2);

	if (n == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f2);
		exit(99);
	}

	return (0);
}
