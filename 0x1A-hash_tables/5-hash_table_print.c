#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that print hash table(hash_table_t)
 * @ht: pointer to the address hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *traveler;

	unsigned long int i = 0, j = 0;

	printf("{");
	if (!ht)
	{
		printf("}\n");
		return;
	}
	while (i < ht->size)
	{
		traveler = ht->array[i];
		while (traveler)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", traveler->key, traveler->value);
			j = 1;
			traveler = traveler->next;
			if (traveler)
				printf(", ");
		}
		i++;
	}
	printf("}\n");
}
