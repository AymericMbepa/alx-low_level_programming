#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: a double pointer to head of linked list
 * @str: a new end of linked list
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end, *ptr;

	new_node_end = malloc(sizeof(list_t));

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->str = strdup(str);
	new_node_end->len = strlen(str);

	if (*head == NULL)
	{
		new_node_end->next = *head;
		*head = new_node_end;
	}
	else
	{
		new_node_end->next = NULL;
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node_end;
	}
	return (new_node_end);
}
