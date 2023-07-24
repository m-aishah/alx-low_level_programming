#include "main.h"

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

/**
 * _islower - Function to check if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

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

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
