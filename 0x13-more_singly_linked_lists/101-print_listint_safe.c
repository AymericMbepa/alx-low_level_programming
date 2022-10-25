#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *ptr = head;
	size_t node_number = 0;

	if (head == NULL)
		exit(98);

	while (temp && ptr && ptr->next && head)
	{
		temp = temp->next;
		ptr = ptr->next->next;
		if (temp == ptr)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n",(void *) &(head->n), head->n);
		node_number++;
		head = head->next;
	}
	head = NULL;
	return (node_number);
}
