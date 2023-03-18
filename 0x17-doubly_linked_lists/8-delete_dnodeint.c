#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to address of the head node
 * @index: index node to be deleted the new node
 * Return: the address of the new node, or NULL if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *traveler, *last_dnode;

	unsigned int locator;

	locator = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		traveler = (*head)->next;
		if (traveler)
			traveler->prev = NULL;
		free(*head);
		*head = traveler;
		return (1);
	}
	traveler = *head;
	last_dnode = *head;
	while (traveler)
	{
		last_dnode = traveler;
		if (locator == index)
		{
			traveler->prev->next = traveler->next;
			traveler->next->prev = traveler->prev;
			free(traveler);
			return (1);
		}
		traveler = traveler->next;
		locator++;
	}
	if (locator - 1 == index)
	{
		last_dnode->prev->next = NULL;
		free(last_dnode);
		return (1);
	}
	return (-1);
}
