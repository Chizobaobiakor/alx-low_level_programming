#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the beginning
 * of a  doubly linked list
 * @head: Double pointer to the head node
 * @n: New member value
 * Return: NULL or new address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastNode = NULL;
	dlistint_t *current = *head;

	lastNode = malloc(sizeof(dlistint_t));
	if (!lastNode)
		return (NULL);

	lastNode->n = n;

	if (*head == NULL)
	{
		lastNode->prev = *head;
		lastNode->next = NULL;
		*head = lastNode;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		lastNode->prev = current;
		current->next = lastNode;
		lastNode->next = NULL;
	}

	return (lastNode);
}
