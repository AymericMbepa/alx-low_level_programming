#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list to free
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
