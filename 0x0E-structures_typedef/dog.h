#ifndef _POPPY_H_
#define _POPPY_H_

/**
 * struct dog - Define a new type of element
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Descrption: structurethat contents personnal data of a person
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
