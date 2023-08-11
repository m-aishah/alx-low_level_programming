#include "hash.h"

/**
 * hash_table_create -  function that creates a hash table.
 * @size: the size of the array.
 *
 * Return: On success, a pointer to the newly created hash table
 *	otherwise, NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t*));
	if (table == NULL)
		return (NULL);
	/*Initialize all elements of hash_table array to NULL*/
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return(table);
}
