#include "main.h"

/**
 * print_rev - Program  to print a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*s++)
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
