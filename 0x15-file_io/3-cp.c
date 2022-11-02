#include "main.h"

/**
 * main - programme the copie the content of a file to another file
 * @argc: number of argument passed to the programm
 * @argv: one dimensionnal array of strings that content all arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char buf[1024];
	int fd, fd1, fd2, fd3, d;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);

	fd = open(argv[1], O_RDONLY);
	fd2 = read(fd, buf, 1024);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	fd3 = write(fd1, buf, fd2);
	if (fd3 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n",
			argv[2]);
		exit(99);
	}
	close(fd);
	d = close(fd1);
	if (d < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %i\n", fd1);
		exit(100);
	}

	return (0);
}
