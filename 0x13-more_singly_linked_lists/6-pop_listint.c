#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: a pointer to the head of linked list
 *
 * Return:  the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head != NULL)
	{
		temp = (*head);
		n = (*head)->n;
		(*head) = (*head)->next;
		free(temp);
	}

	return (n);
}
