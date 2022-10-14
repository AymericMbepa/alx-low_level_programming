#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function that sum two integers
 * @a: an input integer
 * @b: an input integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that return the differrnce of two integers
 * @a: an input integer
 * @b: an input intrger
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: an input integer
 * @b: an input integer
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: an input integer
 * @b: an input integer
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
