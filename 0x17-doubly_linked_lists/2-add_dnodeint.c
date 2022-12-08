#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to head of linked list
 * @n: new element to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (head == NULL || *head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		h = *head;
		h->prev = new;
		*head = new;
		new->next = h;
		return (new);
	}
	return (NULL);
}
