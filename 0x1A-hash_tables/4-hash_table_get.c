#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value associated with a key
 * @ht: pointer to the hash table to look into
 * @key: key to look for in the hash-table
 * Return: the associated value of the key or NULL if otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{	
	hash_node_t *traveler;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);
	traveler = ht->array[key_index((unsigned char *) key, ht->size)];
	while (traveler)
	{
		if ((strcmp(traveler->key, key)) == 0)
			return (traveler->value);
		traveler = traveler->next;
	}
	return (NULL);
}
