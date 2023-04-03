#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds element to begining of a list
 * @head: the list's head
 * @str: string
 * Return: list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmpNode = malloc(sizeof(listint_t));

	if (tmpNode == NULL)
	{
		return (NULL);
	}

	tmpNode->n = n;
	tmpNode->next = (*head);
	(*head) = tmpNode;

	return (*head);
}
