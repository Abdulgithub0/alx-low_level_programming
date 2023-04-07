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
    hash_node_t *new_hnode, *traveler;

    if (ht == NULL || key == NULL)
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

    traveler = ht->array[i];
    while (traveler)
    {
        if (strcmp(traveler->key, key) == 0)
        {
            free(traveler->value);
            traveler->value = strdup(value);
            free(new_hnode->key);
            free(new_hnode->value);
            free(new_hnode);
            return (1);
        }
        if (traveler->next == NULL)
        {
            traveler->next = new_hnode;
            return (1);
        }
        traveler = traveler->next;
    }
    return (0);
}
