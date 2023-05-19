#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index from list
 * @head: list
 * @index: position
 * Return: 1 on success or 0 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *node;
	dlistint_t *list = (*head);
	unsigned int i;


	for (i = 0; i <= index; i++)
	{
		if (list == NULL)
			return (-1);
		if (i == (index - 1))
			p = list;
		if (i == index)
			node = list;
		list = list->next;
	}
	if (index != 0)
		p->next = list;
	else
		*head = list;
	free(node);
	return (1);
}