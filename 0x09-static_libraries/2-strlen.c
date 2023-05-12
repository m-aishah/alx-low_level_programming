#include "main.h"

/**
 * _strlen - Function to return the length of a string
 * @s: pointer to the string
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length += 1;
	return (length);
}
