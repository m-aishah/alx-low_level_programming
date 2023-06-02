#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function that returns the number of elements
 *		in a linked list_t list.
 * @h: Pointer to the head
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
