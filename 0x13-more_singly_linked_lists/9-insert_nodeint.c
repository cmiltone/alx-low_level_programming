#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node node at a given position.
 * @head: list
 * @idx: index, position
 * @n: data
 * Return: node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *list;
	unsigned int i;

	if (node == NULL || head == NULL)
		return (NULL);
	list = (*head);
	node->n = n;
	node->next = list;
	if (idx == 0)
	{
		(*head) = node;
		return (node);
	}
	for (i = 0; i < idx; i++)
	{
		if (list == NULL)
			return (NULL);
		if ((idx - 1) != i)
			list = list->next;
	}
	node->next = list->next;
	list->next = node;
	return (node);
}
