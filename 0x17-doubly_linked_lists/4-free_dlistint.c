#include "lists.h"

/**
 * free_dlistint - func. that free a doubly linked list structure
 * @head: address of the head node
 * Return: nothing i.e void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
