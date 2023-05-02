#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to print n numbers of an array
 * @a: Array to be printed
 * @n: Number of items tp be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
