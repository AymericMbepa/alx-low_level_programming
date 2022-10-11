#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname;
	float cpyage = age;
	char *cpyowner;
	int len_name = 0, len_owner = 0, i = 0;

	while (name[len_name] != '\0')
		len_name++;

	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = (char *)malloc(sizeof(char) * (len_name + 1));
	if (cpyname == NULL)
		return (NULL);

	cpyowner = (char *)malloc(sizeof(char) * (len_owner + 1));
	if (cpyowner == NULL)
		return (NULL);

	for (; i < len_name; i++)
		cpyname[i] = name[i];
	cpyname[len_name] = '\0';

	for (i = 0; i < len_owner; i++)
		cpyowner[i] = owner[i];
	cpyowner[len_owner] = '\0';

	(*new_dog).name = cpyname;
	(*new_dog).age = cpyage;
	(*new_dog).owner = cpyowner;

	return (new_dog);
}
