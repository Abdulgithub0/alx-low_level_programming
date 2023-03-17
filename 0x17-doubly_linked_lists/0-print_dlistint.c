#include "lists.h"

/**
 * print_dlistint - func. to stdout the contents of doubly list struct
 * @h: pointer to address of the head node
 * Return: total number of the nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t total_node;

	dlistint_t *traveler;

	if (h == NULL)
		return (0);
	total_node = 1;
	traveler = h->next;
	printf("%d\n", h->n);
	while (traveler != NULL)
	{
		printf("%d\n", traveler->n);
		traveler = traveler->next;
		total_node++;
	}
	return (total_node);
}

