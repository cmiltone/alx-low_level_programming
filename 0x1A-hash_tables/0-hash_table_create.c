#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: hash table size
 * Return: the pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *table = malloc(sizeof(hash_node_t)* size);
	unsigned long int i = 0;

	if (table == NULL)
		return NULL;

	while (i < size)
	{
		table[i].key = NULL;
		table[i].value = NULL;
		table[i].next = NULL;
		i += 1;
	}
}
