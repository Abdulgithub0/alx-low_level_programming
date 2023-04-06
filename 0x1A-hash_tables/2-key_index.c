#include "hash_tables.h"

/**
 * key_index - compute an index number for a given string
 * starting from  range 0 to total size of the hashtable minus one
 * @key: pointer to array of an unsigned chars
 * @size: total length of the hashtable
 * Return: unique index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
