#include "lists.h"

/**
 * print_listint - function that print all elements of a listint_t list
 * @h: an input listint_t list
 *
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_node++;
		h = h->next;
	}

	return (count_node);
}
