#include "lists.h"

/**
 * sum_listint - sums data in a list
 * @head: list
 * Return: integer, sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}
	return (sum);
}
