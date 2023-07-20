#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: A pointer to the head of the doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *traverse;

	while (head)
	{
		traverse = head->next;
		free(head);
		head = traverse;
	}
}
