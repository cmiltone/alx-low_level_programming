#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: hash table size
 * Return: the pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t)* size);
	unsigned long int i = 0;

	if (hash_table == NULL)
		return NULL;

	hash_table->size = size;
	hash_table->array = (hash_node_t**)calloc(size, sizeof(hash_table_t));
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i += 1;
	}

	return (hash_table);
}
