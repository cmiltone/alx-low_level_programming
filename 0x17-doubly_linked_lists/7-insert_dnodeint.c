#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node in list
 * @h: list
 * @idx: index
 * @n: node data
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *list;
	unsigned int i;

	if (node == NULL || h == NULL)
		return (NULL);
	list = (*h);
	node->n = n;
	node->next = list;
	if (idx == 0)
	{
		(*h) = node;
		return (node);
	}
	for (i = 0; i < idx; i++)
	{
		if (list == NULL)
			return (NULL);
		if ((idx - 1) != i)
			list = list->next;
	}
	node->next = list->next;
	list->next = node;
	return (node);
}
