#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -function that add new node at the beginning of listint list
 * @n: node property
 * @head: pointer to address of head node
 *
 * Return: address of head node or NULL if otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
