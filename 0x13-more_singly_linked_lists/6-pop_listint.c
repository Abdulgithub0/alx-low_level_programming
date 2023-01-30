#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to address of head node
 *
 * Return: head node's data or 0 if otherwise
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;

	int n;

	if (*head)
	{
		new_node = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_node;
		return (n);
	}
	return (0);
}
