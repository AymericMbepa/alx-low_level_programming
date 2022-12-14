#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints struct dog
 * @d: an input struct dog data type
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("Name: (nil)\n");


	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", (*d).name);
	printf("Age: %0.6f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
