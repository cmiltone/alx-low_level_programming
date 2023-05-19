#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 * @head: list
 * @index: position
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;
	dlistint_t *nodes = head;

	while (nodes != NULL)
	{
		nodes = nodes->next;
		k += 1;
		if (k == index)
			return (nodes);
	}
	return (NULL);
}
