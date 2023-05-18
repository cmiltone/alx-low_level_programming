#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 * @h: list
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *list = (dlistint_t *)h;
	size_t n = 0;

	while (list != NULL)
	{
		list = list->next;
		n += 1;
	}

	return (n);
}
