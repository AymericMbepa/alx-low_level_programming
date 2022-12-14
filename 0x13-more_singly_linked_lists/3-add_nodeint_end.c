#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a
 * listint_t list
 * @head: head of linked listint_t list
 * @n: a new_node_element
 *
 * Return:  address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node_end;

	new_node_end = malloc(sizeof(listint_t));

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;
	if (*head == NULL)
	{
		new_node_end->next = *head;
		*head = new_node_end;
	}
	else
	{
		new_node_end->next = NULL;
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node_end;
	}
	return (new_node_end);
}
