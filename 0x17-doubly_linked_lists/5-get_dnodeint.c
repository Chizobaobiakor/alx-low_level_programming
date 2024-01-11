include "lists.h"

/**
 * get_dnodeint_at_index - Get node at index
 * @head: Head of the list
 * @index: Index to be returned
 * Return: NULL or index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = head;

	if (head == NULL)
		return (NULL);

	while (curr != NULL)
	{
		if (i == index)
		{
			return (curr);
		}
		i++;
		curr = curr->next;
	}

	return (NULL);
}
