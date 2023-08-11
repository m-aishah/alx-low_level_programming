#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: the hash table to search for the key/value in.
 * @key: the key whose value is to be retrieved.
 *
 * Return: on success, the value asscociated with the element.
 *	Othewise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *nodePtr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	nodePtr = ht->array[index];

	while (nodePtr)
	{
		if (strcmp(nodePtr->key, key) == 0)
			return (nodePtr->value);

		nodePtr = nodePtr->next;
	}
	return (NULL);
}
