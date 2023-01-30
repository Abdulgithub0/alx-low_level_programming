#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: address of the head node
 *
 * Return: total nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *next_node;

	unsigned int i;

	i = 0;
	next_node = h;
	while (next_node)
	{
		printf("%d\n", next_node->n);
		next_node = next_node->next;
		i++;
	}
	return (i);
}
