#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to be printed.
 *
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nodePtr;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			nodePtr = ht->array[i];
			while (nodePtr)
			{
				printf("'%s': '%s'", nodePtr->key,
					nodePtr->value);
				nodePtr = nodePtr->next;
				if (nodePtr != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
