#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create -  function that creates a hash table.
 * @size: the size of the array.
 *
 * Return: On success, pointer to the newly created hash table
 *	Otherwise, NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table where key/value is added to.
 * @key: the key.
 * @value: the value associated with the @key.
 * Return: 1, on success.
 *		Otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNode, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}

	newNode = malloc(sizeof(shash_node_t));
	if (newNode == NULL)
	{
		free(value_copy);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(value_copy);
		free(newNode);
		return (0);
	}
	newNode->value = value_copy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	if (ht->shead == NULL)
	{
		newNode->sprev = NULL;
		newNode->snext = NULL;
		ht->shead = newNode;
		ht->stail = newNode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newNode->sprev = NULL;
		newNode->snext = ht->shead;
		ht->shead->sprev = newNode;
		ht->shead = newNode;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		newNode->sprev = tmp;
		newNode->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = newNode;
		else
			tmp->snext->sprev = newNode;
		tmp->snext = newNode;
	}

	return (1);
}

/**
 * shash_table_get - retrieve a value associated with a key.
 * @ht: the hash table to search for the key/value in.
 * @key: the key whose value is to be retrieved.
 *
 * Return: on success, the value asscociated with the element.
 *	Othewise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nodePtr;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	nodePtr = ht->shead;
	while (nodePtr != NULL && strcmp(nodePtr->key, key) != 0)
		nodePtr = nodePtr->snext;

	return ((nodePtr == NULL) ? NULL : nodePtr->value);
}

/**
 * shash_table_print - prints a hash table in sorted order.
 * @ht: the hash table to be printed.
 *
 * Return: void.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nodePtr;

	if (ht == NULL)
		return;

	nodePtr = ht->shead;
	printf("{");
	while (nodePtr != NULL)
	{
		printf("'%s': '%s'", nodePtr->key, nodePtr->value);
		nodePtr = nodePtr->snext;
		if (nodePtr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse order.
 * @ht: the hash table to be printed.
 *
 * Return: void.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nodePtr;

	if (ht == NULL)
		return;

	nodePtr = ht->stail;
	printf("{");
	while (nodePtr != NULL)
	{
		printf("'%s': '%s'", nodePtr->key, nodePtr->value);
		nodePtr = nodePtr->sprev;
		if (nodePtr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table to be deleted.
 *
 * Return: void.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *nodePtr, *tmp;

	if (ht == NULL)
		return;

	nodePtr = ht->shead;
	while (nodePtr)
	{
		tmp = nodePtr->snext;
		free(nodePtr->key);
		free(nodePtr->value);
		free(nodePtr);
		nodePtr = tmp;
	}

	free(head->array);
	free(head);
}
