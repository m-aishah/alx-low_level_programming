#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a list
 * @head: A pointer to the head of the list
 *
 * Description: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
