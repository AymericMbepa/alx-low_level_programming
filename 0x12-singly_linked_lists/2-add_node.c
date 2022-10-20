#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the old head of linked_list
 * @str: the new element of header list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
