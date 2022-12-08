#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of doubly linked list
 * @index: index of node to get
 * Return: returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_at_index = head;
	unsigned int i = 0, n = 0;

	while (head != NULL)
	{
		n++;
		head = head->next;
	}

	if (index >= n)
		return (NULL);
	while (i < index)
	{
		node_at_index = node_at_index->next;
		i++;
	}
	return (node_at_index);
}
