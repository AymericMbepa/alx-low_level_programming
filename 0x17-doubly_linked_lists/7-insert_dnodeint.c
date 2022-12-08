#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: a double pointer to head of list
 * @idx: index wher insert node
 * @n:
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx,
				     int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	dlistint_t *head = *h;
	unsigned int i = 0;

	if (*h == NULL || h == NULL)
		return (NULL);
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (idx >= i)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == i - 1)
		return (add_dnodeint_end(h, n));
	i = 0;
	while (i < idx)
	{
		head = head->next;
		i++;
	}
	new->next = head;
	new->prev = head->prev;
	head->prev->next = new;
	head->prev = new;

	return (new);
}
