#include "lists.h"

/**
 * listint_len - return the number of elements in a linked listint_t list
 * @h: an input linked listint_t list
 *
 * Return: thr number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count_element = 0;

	while (h != NULL)
	{
		count_element++;
		h = h->next;
	}

	return (count_element);
}
