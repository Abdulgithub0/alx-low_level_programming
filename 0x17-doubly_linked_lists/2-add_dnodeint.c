#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a doubly linked list
 * @head: pointer to pointer of head node
 * @n: data to be stored inside the int element of the node
 * Return: address of the new node or NULL if otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dnode;

	new_dnode = malloc(sizeof(dlistint_t));
	if (!new_dnode)
		return (NULL);
	new_dnode->n = n;
	new_dnode->prev = NULL;
	new_dnode->next = *head;
	if (*head)
		(*head)->prev = new_dnode;
	*head = new_dnode;
	return (new_dnode);
}
