#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: address of head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *new_head;

	while (head)
	{
		new_head = head->next;
		free(head->str);
		free(head);
		head = new_head;
	}
}

