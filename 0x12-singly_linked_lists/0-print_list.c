#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: the list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	list_t *n = (list_t *)h;
	int i = 0;

	while (n != NULL)
	{
		if (n->str != NULL)
			printf("[%u] %s\n", n->len, n->str);
		else
			printf("[%u] (nil)\n", n->len);
		n = n->next;
		i += 1;
	}

	return (i);
}
