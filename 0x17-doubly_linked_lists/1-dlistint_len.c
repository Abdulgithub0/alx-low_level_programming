#include "lists.h"

/**
 * dlistint_len - func. to return total doubly linked nodes
 * @h: pointer to address of the head node
 * Return: total number of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t total_node;

	dlistint_t *traveler;

	if (h == NULL)
		return (0);
	total_node = 1;
	traveler = h->next;
	while (traveler != NULL)
	{
		traveler = traveler->next;
		total_node++;
	}
	return (total_node);
}

