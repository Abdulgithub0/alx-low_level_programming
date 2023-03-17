#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: index position to search for
 * Return: node located at index or NULL if index doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traveler, *last_dnode;

	unsigned int position;

	if (head == NULL)
		return (NULL);
	position = 0;
	traveler = head;
	last_dnode = head;
	while (traveler)
	{
		last_dnode = traveler;
		traveler = traveler->next;
		if (position == index)
			return (last_dnode);
		position++;
	}
	if (position == index)
		return (last_dnode);
	return (NULL);
}
