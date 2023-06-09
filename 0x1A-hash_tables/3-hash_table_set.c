#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	if (ht->array[index] != NULL)
	{
		node = malloc(sizeof(hash_node_t));

		if (node == NULL)
			return (0);

		node->key = (char *)key;
		node->value = (char *)value;
		node->next = ht->array[index];
		ht->array[index] = node;
	} else
	{
		ht->array[index] = malloc(sizeof(hash_node_t));

		if (ht->array[index] == NULL)
			return (0);

		(*ht->array[index]).key = (char *)key;
		(*ht->array[index]).value = (char *)value;
	}

	return (1);
}
