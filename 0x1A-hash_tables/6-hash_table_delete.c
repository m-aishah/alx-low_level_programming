#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table to be deleted.
 *
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nodePtr, *nodePtr2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nodePtr = ht->array[i];
			while (nodePtr)
			{
				free(nodePtr->key);
				free(nodePtr->value);
				nodePtr2 = nodePtr;
				nodePtr = nodePtr->next;
				free(nodePtr2);
			}
		}
	}
	free(ht->array);
	free(ht);
}
