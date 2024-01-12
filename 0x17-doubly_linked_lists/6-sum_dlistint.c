#include "lists.h"

/**
 * sum_dlistint - Sum the numbers in a list
 * @head: Pointer to the head
 * Return: Sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	if (head == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
