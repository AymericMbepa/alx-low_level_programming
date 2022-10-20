#include "lists.h"

/**
 * free_list - function that free a linked list
 * @head: an input linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *free_l;

	free_l = head;
	while (head)
	{
		free_l = head;
		free(free_l->str);
		free(free_l);
		head = head->next;
	}
	free(head);
}
