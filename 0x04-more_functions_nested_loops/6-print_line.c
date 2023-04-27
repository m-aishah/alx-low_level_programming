#include "main.h"
#include <stdio.h>

/**
 * print_line - Function to print '_' n times
 * @n: Number of times to print '_'
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
