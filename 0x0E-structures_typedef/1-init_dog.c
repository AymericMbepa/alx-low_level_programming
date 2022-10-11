#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a pointer to a struct dog type variable
 * @name: First member of struct dog
 * @age: second member of struct dog
 * @owner: Third member of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
