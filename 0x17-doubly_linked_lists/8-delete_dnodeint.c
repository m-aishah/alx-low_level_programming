#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *traverse = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (traverse == NULL)
			return (-1);
		traverse = traverse->next;
	}

	if (traverse == *head)
	{
		*head = traverse->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		traverse->prev->next = traverse->next;
		if (traverse->next != NULL)
			traverse->next->prev = traverse->prev;
	}

	free(traverse);
	return (1);
}
