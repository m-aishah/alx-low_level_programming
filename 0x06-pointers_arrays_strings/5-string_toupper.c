#include "main.h"

/**
 * string_toupper - Function that changes all lower-
 *			case char of a string to upper
 * @s: string
 * Return: A pointer to the corrected string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}

	return (s);
}
