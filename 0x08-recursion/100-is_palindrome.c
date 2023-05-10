#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: The string in question
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += _strlen(s + length);
	}

	return (length);
}

/**
 * _palindrome - Function that checks if a stringis a palindrome
 * @s: The string in question
 * @length: Length of the string
 * @i: The index of the string to be checked
 *
 * Return: If the string is a palindrome - 1
 *	If the string is not a palindrome - 0
 */

int _palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);

	if (s[i] == s[length - i - 1])
		return (_palindrome(s, length, i + 1));

	return (0);
}


/**
 * is_palindrome - Function that checks if a string is a palindrome or not
 * @s: Pointer to the string to be checked
 *
 * Return: If the string is a palindrome - 1
 *		If the string is not a palindrome - 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen(s);

	if (!(*s))
		return (1);

	return (_palindrome(s, length, i));
}
