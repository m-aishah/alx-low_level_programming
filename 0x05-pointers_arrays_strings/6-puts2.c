#include "main.h"

/**
 * puts2 - Function to print every other character of a string
 * @str: pointer to the string
 * Return: void
 */

void puts2(char *str)
{
	int i, len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

