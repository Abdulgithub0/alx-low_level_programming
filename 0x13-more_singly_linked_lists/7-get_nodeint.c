#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index -function that returns the nth node of a listint_t linked list
 * @head: pointer to address
 * @index: index of an element
 *
 * Return: address of the nth node or NULL if otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *nth_node;

	i = 0;
	nth_node = head;
	while (nth_node)
	{
		if (i == index)
		{
			return (nth_node);
		}
		else
		{
			nth_node = nth_node->next;
		}
		++i;
	}
	if (i == index)
	{
		return (nth_node);
	}
	return (NULL);
}

