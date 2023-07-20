#include "lists.h"

/**
 * sum_dlistint - A functionthat returns the sum of
 *		all the data of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all the data in the list (0, if the list is empty)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
