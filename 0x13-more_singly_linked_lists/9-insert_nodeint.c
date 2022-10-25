#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: a double pointer to head of list
 * @idx: position of insertion
 * @n: element to insert
 * Return:  the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *nodeint_at_index, *temp = *head;
	unsigned int i = 0, list_lenght = 0;

	nodeint_at_index = malloc(sizeof(listint_t));
	if (nodeint_at_index == NULL)
		return (NULL);

	while (temp != NULL)
	{
		list_lenght++;
		temp = temp->next;
	}

	if (idx >= list_lenght)
		return (NULL);

	nodeint_at_index->n = n;
	nodeint_at_index->next = NULL;

	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}

	temp = *head;
	i = 0;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	temp->next = nodeint_at_index;
	nodeint_at_index->next = ptr;

	return (nodeint_at_index);
}
