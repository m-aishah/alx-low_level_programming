#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * @head: A pointer to the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
