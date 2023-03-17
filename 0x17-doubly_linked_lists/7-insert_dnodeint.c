#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position
 * @h: pointer to address of the head node
 * @idx: index to insert the new node
 * @n: data to be put into the inserted new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_dnode, *traveler, *last_dnode;

	unsigned int locator;

	locator = 0;
	if (!(*h))
		return (NULL);
	new_dnode = malloc(sizeof(dlistint_t));
	if (!new_dnode)
		return (NULL);
	traveler = *h;
	last_dnode = *h;
	while (traveler)
	{
		last_dnode = traveler;
		if (locator == idx)
		{
			new_dnode->n = n;
			new_dnode->next = traveler;
			new_dnode->prev = traveler->prev;
			traveler->prev->next = new_dnode;
			traveler->prev = new_dnode;
			return (new_dnode);
		}
		traveler = traveler->next;
		locator++;
	}
	if (locator == idx)
	{
		new_dnode->n = n;
		new_dnode->next = last_dnode;
		new_dnode->prev = last_dnode->prev;
		last_dnode->prev = new_dnode;
		return (new_dnode);
	}
	free(new_dnode);
	return (NULL);
}
