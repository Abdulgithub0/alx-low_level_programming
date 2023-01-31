#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -function that inserts new node at a given position
 * @head: pointer to the head address
 * @idx: index of the node
 * @n: data to be store inside the inserted node
 *
 * Return: address of the inserted new node or NULL if otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *insert_node, *index_node, *prev_node;

	if (!head)
		return (NULL);
	insert_node = malloc(sizeof(listint_t));
	if (!insert_node)
		return (NULL);
	insert_node->n = n;
	index_node = *head;
	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (*head);
	}
	for (i = 0; i < idx; i++)
	{
		prev_node = index_node;
		index_node = index_node->next;
	}
	if (index_node)
	{
		prev_node->next = insert_node;
		insert_node->next = index_node;
		return (insert_node);
	}
	return (NULL);
}


