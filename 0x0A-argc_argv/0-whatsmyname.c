#include "main.h"

/**
 * main - print its name
 * @argc: number of argument passed to the program
 * @argv: one dimensionnal array of strings
 * Return: always 0 Success
 */

int main(int argc, char *argv[])
{

	while (*argv[0])
		_putchar(*argv[0]++);

	return (0);
}
