#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked-list
 * @h: address of the head node of the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	if (h->next != NULL)
	{
		i = 1;
		return (i + (i + print_list(h->next)));
	}
	return (i);
}

