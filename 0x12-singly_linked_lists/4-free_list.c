#include "lists.h"

/**
 * free_list - function that free a linked list
 * @head: an input linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
	}
	free(head);
}
