#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer to head of linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *free_l;

	if (head == NULL)
		return;
	while (*head)
	{
		free_l = *head;
		*head = (*head)->next;
		free(free_l);
	}
	free(*head);
	(*head) = NULL;
}
