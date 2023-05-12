#include "main.h"
#include <stdio.h>

/**
 * _isupper - Function to check if a character is uppercase
 * @c: character to be checked
 * Return: Always 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
