#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -function that add new node at the end of listint list
 * @n: node property
 * @head: pointer to address of head node
 *
 * Return: address of head node or NULL if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	end_node = *head;
	if (!(*head))
	{
		*head = new_node;
		return (*head);
	}
	while (end_node->next)
		end_node = end_node->next;
	end_node->next = new_node;
	return (end_node->next);
}
