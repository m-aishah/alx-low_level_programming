#include "main.h"

/**
 * _puts - Function to print a string followed by a new line
 * @str: Pointer to a string
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
