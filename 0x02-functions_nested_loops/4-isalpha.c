#include "main.h"

/**
 * _isalpha - Function to check if a character is an alphabet
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter (either uppercase or lowercase), else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
