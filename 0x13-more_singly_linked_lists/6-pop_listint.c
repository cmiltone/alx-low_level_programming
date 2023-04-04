#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list,
 * and returns the head node’s data
 * @head: list
 * Return: integer
*/

int pop_listint(listint_t **head)
{
	listint_t *node = (*head);
	int n;

	if (head == NULL)
	{
		free(*head);
		return (0);
	}

	n = (*head)->n;

	(*head) = (*head)->next;
	free(node);

	return (n);
}
