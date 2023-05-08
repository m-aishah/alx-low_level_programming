#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 *
 * @s: Pointer to the string in question
 * @c: Character to be searched for
 *
 * Return: A pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
