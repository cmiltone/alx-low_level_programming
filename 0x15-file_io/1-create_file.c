#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: file name,
 * @text_content: content
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int f;
	int n = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
		n = write(f, text_content, strlen(text_content));

	close(f);

	if (n == -1)
		return (-1);

	return (1);
}
