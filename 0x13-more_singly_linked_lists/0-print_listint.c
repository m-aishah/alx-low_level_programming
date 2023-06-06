#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all elements of a list
 * @h: head of the list
 *
 * Return: the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
