#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 *			in a linked dlistint_t list.
 * @h: A pointer to the head of the linked list
 * Return: the number of elements in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
