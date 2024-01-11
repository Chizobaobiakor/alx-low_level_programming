#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning
 * of a  doubly linked list
 * @head: Double pointer to the head node
 * @n: New member value
 * Return: NULL or new address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (*head);
}
