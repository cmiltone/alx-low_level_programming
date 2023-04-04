#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: list
 * @index: is the index of the node, starting at 0
 * Return: node of list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
		{
			node = head;
			break;
		}
		i += 1;
		head = head->next;
	}

	return (node);
}
