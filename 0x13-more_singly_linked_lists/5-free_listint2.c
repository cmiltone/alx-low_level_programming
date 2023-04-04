#include "lists.h"

/**
 * free_listint2 - frees mem from list
 * @head: the list
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmpNode;

	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		tmpNode = (*head);
		(*head) = (*head)->next;
		free(tmpNode);
	}

	head = NULL;
}
