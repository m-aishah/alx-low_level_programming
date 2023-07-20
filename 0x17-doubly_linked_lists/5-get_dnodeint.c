#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of
 *			a dlistint_t list.
 * @head: A pointer to the head of a doubly linked list
 * @index: index of the node to be returned
 * Return: on failure, NULL
 *		otherwise, nth node of the doubly linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head)
	{
		for (i = 0; head; i++)
		{
			if (i == index)
				return (head);
			head = head->next;
		}
	}
	return (NULL);
}
