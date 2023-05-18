#include "lists.h"

/**
 * print_dlistint - prints all elemnets of a list
*/

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *list = (dlistint_t *)h;
	size_t n = 0;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		n += 1;
	}

	return (n);
}