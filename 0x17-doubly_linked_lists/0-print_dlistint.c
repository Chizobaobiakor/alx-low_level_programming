#include "lists.h"

/**
 * print_dlistint - Printing a double linked list
 * @h: Pointer to the head of the list
 * Return: Size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
