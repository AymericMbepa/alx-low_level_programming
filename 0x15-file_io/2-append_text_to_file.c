#include "main.h"

/**
 * append_text_to_file - function that append text at the end of the file
 * @filename: name of the file to append text to
 * @text_content: text to append at the end of file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd1, fd2;

	if (filename == NULL)
		return (-1);

	fd1 = open(filename, O_RDWR | O_APPEND);
	if (fd1 < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd1);
		return (1);
	}
	fd2 = write(fd1, text_content, strlen(text_content));

	close(fd1);
	if (fd2 < 0)
		return (-1);
	return (1);
}
