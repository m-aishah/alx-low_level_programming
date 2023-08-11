#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table where key/value is added to.
 * @key: the key.
 * @value: the value associated with the @key.
 * Return: 1, on success.
 *		Otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *nodePtr;
	unsigned long int index;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	nodePtr = ht->array[index];
	while (nodePtr)
	{
		if (strcmp(nodePtr->key, key) == 0)
		{
			free(nodePtr->value);
			nodePtr->value = value_copy;
			return (1);
		}
		nodePtr = nodePtr->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(value_copy);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(value_copy);
		return (0);
	}
	newNode->value = value_copy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
