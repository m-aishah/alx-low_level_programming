#include "lists.h"

/**
 * add_dnodeint - A function that adds a node at the beginninge
 *			of a dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Value of the new node to be added.
 * Return: the address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = (*head);
	if ((*head) != NULL)
	{
		(*head)->prev = newNode;
	}
	(*head) = newNode;

	return (newNode);
}
