#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of doubley linked list
 * @head: list
 * @n: node data
 * Return: list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *list;

	if (node == NULL)
		return (NULL);

	node->n = n;

	if ((*head) == NULL)
	{
		(*head) = node;
		return (*head);
	}

	list = (*head);

	while (list->next != NULL)
	{
		list = list->next;
	}

	list->next = node;

	return (node);
}
