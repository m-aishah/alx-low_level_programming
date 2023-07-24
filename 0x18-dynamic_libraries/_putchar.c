#include "main.h"
#include <stdio.h>

/**
 * _putchar - Function to print a character
 * @c: character to be printed
 * Return: void
 */

int _putchar(char c)
{
	putchar(c);
	return (0);
}

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
