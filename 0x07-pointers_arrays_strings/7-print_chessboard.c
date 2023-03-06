#include <unistd.h>

/**
 * print_chessboard - prints chess board
 *
 * @a: array
 *
 * Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	char newline = '\n';

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			write(1, &a[i][j], 1);
		}
		write(1, &newline, 1);
	}
}
