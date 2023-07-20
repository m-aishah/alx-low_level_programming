#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that insertse
 *		a new node at a given position of a dlistint_t list.
 * @h: A double pointer to the head of a doubly linked list.
 * @idx: The index at which the new node is to be inserted.
 * @n: Value of the new node to be inserted.
 * Return: On success, address of the new node
 *		else, NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *traverse;
	unsigned int i = 0;

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	traverse = *h;
	while (traverse->next != NULL)
	{
		if (idx == i)
		{
			newNode->prev = traverse->prev;
			newNode->next = traverse;
			traverse->prev->next = newNode;
			traverse->prev = newNode;
			return (newNode);
		}
		traverse = traverse->next;
		i++;
	}
	if (idx == i)
		return (add_dnodeint_end(h, n));

	free(newNode);
	return (NULL);
}

