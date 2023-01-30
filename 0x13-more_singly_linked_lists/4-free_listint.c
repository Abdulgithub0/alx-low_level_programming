#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that free a listint_t list
 * @head: address of the head node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head)
	{
		next_node = head;
		free(head);
		head = next_node->next;
	}
}
