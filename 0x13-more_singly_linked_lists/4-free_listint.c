#include "lists.h"

/**
 * free_list - frees mem from list
 * @head: the list
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmpNode;

	while (head != NULL)
	{
		tmpNode = head;
		head = head->next;
		tmpNode->n = NULL;
		free(tmpNode);
	}
}
