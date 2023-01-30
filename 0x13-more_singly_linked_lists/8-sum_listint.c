#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that free a listint_t list
 * @head: address of the head node
 *
 * Return: void
 */

int sum_listint(listint_t *head)
{
	listint_t *next_node;

	int i;

	i = 0;
	while (head)
	{
		next_node = head->next;
		i += head->n;
		head = next_node;
	}
	return (i);
}
