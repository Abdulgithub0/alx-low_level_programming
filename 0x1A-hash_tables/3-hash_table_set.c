#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash_table_t struct
 * @ht: address of the hash_table
 * @key: domain given to djb2 algorithm
 * @value: function codomain
 * Return: 1 on success or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	hash_node_t *new_hnode;

	int checker;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	i = key_index((unsigned char *) key, ht->size);
	new_hnode = malloc(sizeof(hash_node_t));
	if (new_hnode == NULL)
		return (0);
	new_hnode->key = strdup(key);
	if (new_hnode->key == NULL)
	{
		free(new_hnode);
		return (0);
	}
	new_hnode->value = strdup(value);
	if (new_hnode->value == NULL)
	{
		free(new_hnode->key);
		free(new_hnode);
		return (0);
	}
	new_hnode->next = NULL;
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new_hnode;
		return (1);
	}
	checker = res_col(ht->array[i], new_hnode, value, key);
	return (checker);
}

/**
 * res_col - resolve collision occurence in the
 * hashtable using separate chaining mechanism
 * @trav: hashnode located at the site of collision
 * @hn: new hashnode to be chained
 * @vl: value element of the new hashnode
 * @ky: key member of the new hashnode
 * Return: 1 on success or 0 if otherwise
 */

int res_col(hash_node_t *trav, hash_node_t *hn, const char *vl, const char *ky)
{
	while (trav)
	{
		if ((strcmp(trav->key, ky)) == 0)
		{
			free(trav->value);
			free(hn->key);
			free(hn->value);
			free(hn);
			trav->value = strdup(vl);
			return (1);
		}
		if (trav->next == NULL)
		{
			trav->next = hn;
			return (1);
		}
		trav = trav->next;
	}
	return (0);
}

