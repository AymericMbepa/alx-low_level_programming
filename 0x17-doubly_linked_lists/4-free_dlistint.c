#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list to free
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
