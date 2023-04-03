#include <stdlib.h>
#include "lists.h"

/**
 * listint_len -  prints all the elements of a list
 * @h: the list
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	listint_t *n = (listint_t *)h;
	int i = 0;

	while (n != NULL)
	{
		n = n->next;
		i += 1;
	}

	return (i);
}
