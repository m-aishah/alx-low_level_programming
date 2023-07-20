#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
  insert_dnodeint_at_index(&head, 5, 100);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}

