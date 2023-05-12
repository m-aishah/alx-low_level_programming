#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: String to be search
 * @accept: String containing the bytes to be searched for
 *
 * Return: pointer to the byte in @s that matches one of the bytes in @accept,
 *	if no matches, return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
