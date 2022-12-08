#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: double pointer to head of linked list
 * @n: new element to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = NULL;

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
		while (h->next != NULL)
			h = h->next;
		new->prev = h;
		h->next = new;
		return (new);
	}
	return (NULL);
}
