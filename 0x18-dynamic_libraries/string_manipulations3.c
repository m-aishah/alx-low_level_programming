#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: prefix substring to be measured
 *
 * Return: the number of bytes of @s,
 *	consisting of only bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}

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

/**
 * _strstr - Function that locates a substring
 * @haystack: String to be searched
 * @needle: substring to be searched for
 * Return: pointer to the beginning of the located substring
 *	if substring not found return NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
