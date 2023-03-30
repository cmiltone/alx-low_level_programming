#include "lists.h"

/**
 * list_len - returns length of a list
 * @h: the list
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	list_t *n = (list_t *)h;
	int i = 0;

	while (n != NULL)
	{
		n = n->next;
		i += 1;
	}

	return (i);
}
