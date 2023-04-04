#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list,
 * and returns the head node’s data
 * @head: list
 * Return: integer
*/

int pop_listint(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return (0);

	node = (*head);

	(*head) = (*head)->next;

	return (node->n);
}
