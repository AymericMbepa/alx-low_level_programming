#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of table to create
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = NULL;

	return (new_table);
}
