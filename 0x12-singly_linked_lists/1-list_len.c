#include <stdio.h>
#include "lists.h"

/**
 * list_len -function that returns the number of elements in a linked list
 * @h: address of the head node of the list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	if (h == NULL)
		return (i);

	i = 1;
	return (i + list_len(h->next));
}

