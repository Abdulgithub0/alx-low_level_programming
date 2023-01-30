#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_len -function that return the number of node in listint list
 * @h: address of the head node
 *
 * Return: total nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *next_node;

	unsigned int i;

	i = 0;
	next_node = h;
	while (next_node)
	{
		i++;
		next_node = next_node->next;
	}
	return (i);
}
