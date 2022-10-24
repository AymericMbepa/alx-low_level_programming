#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: a pointer to the head of linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *free_l;

	while (head)
	{
		free_l = head;
		head = head->next;
		free(free_l);
	}
	free(head);
}
