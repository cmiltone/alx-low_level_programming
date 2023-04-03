#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a list
 * @h: the list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *n = (listint_t *)h;
	int i = 0;

	while (n != NULL)
	{
		printf("%d\n", n->n);
		n = n->next;
		i += 1;
	}

	return (i);
}
