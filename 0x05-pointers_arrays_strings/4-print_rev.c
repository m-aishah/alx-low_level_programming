#include "main.h"

/**
 * print_rev - Function that prints a string in reverse followed by a line
 * @s: Pointer to the string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
