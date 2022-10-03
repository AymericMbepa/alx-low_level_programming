#include "main.h"
#include <stdio.h>

/**
 * main - print all argument it receive
 * @argc: number of argument it receive
 * @argv: one dimensional array of strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);

	return (0);
}
