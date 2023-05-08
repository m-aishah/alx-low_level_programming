#include "main.h"

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
