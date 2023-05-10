#include "main.h"

/**
 * _print_rev_recursion - Function to print a string in revers
 * @s: strin to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
