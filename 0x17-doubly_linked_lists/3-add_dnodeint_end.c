#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end
 *			of a dlistint_t list.
 * @head: A double pointer to the head of the list.
 * @n: The value of the new node to be added.
 * Return: the address of the new element,
 *		NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *traverse;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	traverse = *head;
	while (traverse->next != NULL)
		traverse = traverse->next;
	traverse->next = newNode;
	newNode->prev = traverse;

	return (newNode);
}
