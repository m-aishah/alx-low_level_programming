#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function to check for a digit (0-9)
 * @c : integer to be checked
 * Return: 1, if it is a digit. Else, 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
