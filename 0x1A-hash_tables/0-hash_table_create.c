#include "hash_tables.h"

/**
 * hash_table_create -  function that creates a hash table.
 * @size: the size of the array.
 *
 * Return: On success, pointer to the newly created hash table
 *	Otherwise, NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/*Allocate memory for hash table*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	/*Allocate memory for hash table array*/
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	/*Initialize all elements of hash table array to NULL*/
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
