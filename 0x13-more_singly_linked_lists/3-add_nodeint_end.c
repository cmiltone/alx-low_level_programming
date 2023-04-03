#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds element to end of a list
 * @head: the list's head
 * @n: string
 * Return: list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *list;

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

	return (list);
}
