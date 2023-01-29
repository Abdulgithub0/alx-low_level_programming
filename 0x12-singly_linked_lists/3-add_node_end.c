#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end list node
 * @head: pointer to pointer of head node
 * @str: address of the string
 *
 * Return: address of node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *caudal, *next_caudal;

	caudal = malloc(sizeof(list_t));
	if (caudal == NULL)
		return (NULL);
	caudal->str = strdup(str);
	if (!caudal->str)
	{
		free(caudal);
		return (NULL);
	}
	caudal->len = strlen(caudal->str);
	if (*head == NULL)
	{
		*head = caudal;
		caudal->next = NULL;
		return (*head);
	}
	next_caudal = *head;
	while (next_caudal->next)
		next_caudal = next_caudal->next;
	next_caudal->next = caudal;
	return (caudal);
}

