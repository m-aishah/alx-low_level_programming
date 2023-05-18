#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: lower limit of elements in the array
 * @max: Upper limit of elements in the array
 *
 * Return: On success - pointer to the array
 *		else - NULL
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = (int *)malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
