#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning node
 * @head: pointer to pointer of head node
 * @str: address of the string
 *
 * Return: address of node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *cranial, *old_head;

	cranial = malloc(sizeof(list_t));
	if (cranial == NULL)
		return (NULL);
	cranial->str = strdup(str);
	if (!cranial->str)
	{
		free(caudal);
		return (NULL);
	}
	cranial->len = strlen(cranial->str);
	if (*head == NULL)
	{
		*head = cranial;
		cranial->next = NULL;
		return (*head);
	}
	old_head = *head;
	cranial->next = old_head;
	*head = cranial;
	return (*head);
}

