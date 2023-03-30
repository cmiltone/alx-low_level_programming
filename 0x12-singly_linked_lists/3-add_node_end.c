#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds element to end of a list
 * @head: the list's head
 * @str: string
 * Return: list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *list;

	if (node == NULL)
		return (NULL);

	node->len = strlen(str);
	node->str = strdup(str);

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
