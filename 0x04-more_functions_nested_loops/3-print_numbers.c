#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Function to print the numbers 0-9
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
