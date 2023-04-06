#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array of the hashtable
 * Return: pointer to the  hashtable or NULL if otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;

	/*hash_node_t *hash_nodes;*/

	new_hashtable = malloc(sizeof(hash_table_t));
	/*hash_nodes = malloc(sizeof(hash_node_t) * size);*/
	if (new_hashtable == NULL)
		return (NULL);
	new_hashtable->size = size;
	new_hashtable->array = NULL;
	return (new_hashtable);
}
