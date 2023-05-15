#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of characters,
 *		and initializes it with a specific character
 * @size: Size of the array
 * @c: The character which the array will continue
 *
 * Return: a pointer to the array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc((sizeof(char) * size) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	arr[size] = '\0';

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}


