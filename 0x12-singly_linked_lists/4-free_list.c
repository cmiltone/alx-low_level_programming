#include "lists.h"

/**
 * free_list - frees mem from list
 * @head: the list
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *tmpNode;

	while(head != NULL)
	{
		tmpNode = head;
		head = head->next;
		free(tmpNode);
	}
}