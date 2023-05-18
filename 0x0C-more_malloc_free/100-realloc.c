#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function that realocates a memory block using malloc and free
 * @ptr: Pointer to to previously allocated memory block
 * @old_size: size of previously allocated memory block
 * @new_size: Size of newly allocated memory block
 *
 * Return: On Success - Pointer ot the newly allocated memory block
 *		else - NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	char	*old, *new;
	void *newblock;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	newblock = malloc(new_size);

	if (newblock == NULL)
		return (NULL);

	size = (new_size < old_size) ? new_size : old_size;

	old = ptr;
	new = newblock;

	for (i = 0; i < size; i++)
		new[i] = old[i];
	free(ptr);

	return (newblock);
}
