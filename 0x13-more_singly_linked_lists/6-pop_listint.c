#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: a pointer to the head of linked list
 *
 * Return:  the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n;

	if (head != NULL)
	{
		n = (*head)->n;
		(*head) = (*head)->next;
	}

	return (n);
}
