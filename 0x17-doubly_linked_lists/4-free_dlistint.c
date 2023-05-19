#include "lists.h"

/**
 * free_dlistint - free list
 * @head: list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpNode;

	while (head != NULL)
	{
		tmpNode = head;
		head = head->next;
		free(tmpNode);
	}
}