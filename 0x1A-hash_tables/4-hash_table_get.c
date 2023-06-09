#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated
 * with a key in hash table
 * @ht: hash table
 * @key: the key
 * Return: the value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (node == NULL)
		return (NULL);

	return (node->value);
}
