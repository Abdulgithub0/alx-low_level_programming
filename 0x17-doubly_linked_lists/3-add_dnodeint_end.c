#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a doubly linked list
 * @head: pointer to pointer of head node
 * @n: data to be stored inside the int element of the node
 * Return: address of the new node or NULL if otherwise
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_dnode, *last_dnode, *traveler;

	new_dnode = malloc(sizeof(dlistint_t));
	if (!new_dnode)
		return (NULL);
	new_dnode->n = n;
	traveler = *head;
	last_dnode = NULL;
	if (!(*head))
	{
		new_dnode->prev = NULL;
		*head = new_dnode;
		return (new_dnode);
	}
	while (traveler)
	{
		last_dnode = traveler;
		traveler = traveler->next;
	}
	new_dnode->prev = last_dnode;
	last_dnode->next = new_dnode;
	return (new_dnode);
}
