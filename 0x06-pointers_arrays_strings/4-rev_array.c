#include "main.h"
/**
 * reverse_array - Function to reverse array of integers
 * @a: Array o be reversed
 * @n: Number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}

