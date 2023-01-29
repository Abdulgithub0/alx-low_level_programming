#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: address of head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *last_node;

	last_node = head;
	//if (last_node == NULL)
	//	free(last_node->next);
	if (last_node->next != NULL)
	{
		last_node =  last_node->next;
		free_list(last_node);
	}
	else
	{
		free(last_node->next);
	}
}
	
