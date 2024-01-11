#include "lists.h"

/**
 * dlistint_len - Printing a double linked list
 * @h: Pointer to the head of the list
 * Return: Size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
