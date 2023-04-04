#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: list
 * @index: position
 * Return: integer, 1 if success -1 if ailed
 *
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *node;
	listint_t *list = (*head);
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
