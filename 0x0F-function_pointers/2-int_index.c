#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: Pointer to the array to be searched
 * @size: number of elements in @array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: if any match, return index of the first element that matches
 *		if no element matches - -1
 *		else if size <= 0 - -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
