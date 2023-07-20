#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that insertse
 *		a newNode node at a given position of a dlistint_t list.
 * @h: A double pointer to the head of a doubly linked list.
 * @idx: The index at which the new node is to be inserted.
 * @n: Value of the new node to be inserted.
 * Return: On success, address of the new node
 *		else, NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *traverse = *h, *newNode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		traverse = traverse->next;
		if (traverse == NULL)
			return (NULL);
	}

	if (traverse->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = traverse;
	newNode->next = traverse->next;
	traverse->next->prev = newNode;
	traverse->next = newNode;

	return (newNode);
}
