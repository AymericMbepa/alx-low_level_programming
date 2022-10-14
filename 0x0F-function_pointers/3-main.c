#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: a pointer to a one dimensionnal array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != "+" && argv[2] != "-" && argv[2] != "/" &&
	    argv[2] != "%" && argv[2] != "*")
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3] == '0' && (argv[2] == "/" || argv[2] == "%"))
	{
		printf("Error\n");
		exit(100);
	}

	return (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
}
