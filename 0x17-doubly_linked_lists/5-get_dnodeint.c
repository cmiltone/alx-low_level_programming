#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 * @head: list
 * @index: position
 * Return: list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;
	dlistint_t *nodes = head;

	if (head == NULL)
		return (NULL);

	while (nodes != NULL)
	{
		if (k == index)
			return (nodes);
		nodes = nodes->next;
		k += 1;
	}
	return (NULL);
}
