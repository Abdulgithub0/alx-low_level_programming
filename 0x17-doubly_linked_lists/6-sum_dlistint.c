#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a dlistint_t linked list
 * @head: address of the head node
 * Return: sum of all data or 0 if otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *traveler;

	int sum;

	sum = 0;
	if (!head)
		return (sum);
	traveler = head;
	while (traveler)
	{
		sum += traveler->n;
		traveler = traveler->next;
	}
	return (sum);
}
