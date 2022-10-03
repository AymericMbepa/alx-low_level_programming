#include "main.h"
#include <stdio.h>

/**
 * main - print the number of argument passed into it
 * @argc: number of argument passead into it
 * @argv: one dimensional array of strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
