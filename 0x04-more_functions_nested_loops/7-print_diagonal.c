#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - A function to print a diagonal line
 * @n: Number of times to print '\'
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i - 1; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

