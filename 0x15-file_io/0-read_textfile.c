#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the name of text file to read
 * @letters: the number of letters it should be read and print
 *
 * Return: actual number of letters it could read and print
 * if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd1, fd2, fd3;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd1 = open(filename, O_RDONLY);
	if (fd1 < 0)
	{
		free(buf);
		return (0);
	}

	fd2 = read(fd1, buf, letters);
	if (fd2 < 0)
	{
		free(buf);
		return (0);
	}

	fd3 = write(STDOUT_FILENO, buf, fd2);
	free(buf);
	close(fd1);

	if (fd3 < 0)
		return (0);
	return ((ssize_t)fd3);
}
