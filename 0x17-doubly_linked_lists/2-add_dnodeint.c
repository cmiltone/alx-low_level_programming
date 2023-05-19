#include "lists.h"
/**
 * add_dnodeint - adds node at begining of list
 * @head: list
 * @n: node data
 * Return: address on new node or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = node;
	(*head) = node;

	return (*head);
}
