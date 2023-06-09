#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char*)key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	if (ht->array[index] != NULL)
	{
		node->key = (char *)key;
		node->value = (char *)value;
		node->next = (*ht->array);
		(*ht->array) = node;
	} else
	{
		ht->array[index] = malloc(sizeof(hash_node_t));

		if (ht->array[index] == NULL)
			return (0);

		(*ht->array[index]).key = (char *)key;
		(*ht->array[index]).value = (char *)value;
	}
	/*(void)key;
	(void)value;
	(void)ht;
	(void)index; */

	return (1);
}
