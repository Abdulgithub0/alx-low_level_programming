#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array of the hashtable
 * Return: pointer to the  hashtable or NULL if otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;

	unsigned long int i = 0;

	new_hashtable = malloc(sizeof(hash_table_t));
	if (!new_hashtable)
		return (NULL);
	new_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashtable->array == NULL)
	{
		free(new_hashtable);
		return (NULL);
	}
	new_hashtable->size = size;
	while (i < size)
	{
		new_hashtable->array[i] = NULL;
		i++;
	}
	return (new_hashtable);
}
