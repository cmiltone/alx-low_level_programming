#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: content
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f, n = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	n = write(f, text_content, strlen(text_content));

	if (n == -1)
		return (-1);

	return (1);
}
