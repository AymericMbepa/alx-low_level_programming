#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @head: head of linked listint_t list
 * @index: index of node to return
 *
 * Return:  the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int list_lenght = 0, i = 0;
	listint_t *ptr = head, *nodeint_at_index = head;

	while (ptr != NULL)
	{
		list_lenght++;
		ptr = ptr->next;
	}

	if (index >= list_lenght)
		return (NULL);

	while (i < index)
	{
		nodeint_at_index = nodeint_at_index->next;
		i++;
	}

	return (nodeint_at_index);
}
