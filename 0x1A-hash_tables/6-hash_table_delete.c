#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that delete hash table(hash_table_t)
 * @ht: pointer to the address hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *traveler, *temp;

	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		traveler = ht->array[i];
		while (traveler)
		{
			temp = traveler->next;
			free(traveler->key);
			free(traveler->value);
			free(traveler);
			traveler = temp;
		}
		i++;
	}
	free(ht);
}
