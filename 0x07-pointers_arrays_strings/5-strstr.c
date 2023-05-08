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
	int start, j, i = 0;

	while (*(haystack + i) != '\0')
	{
		if (haystack[i] == *needle)
		{
			start = i;
			for (j = 0; needle[j]; )
			{
				while (haystack[i + j] == needle[j])
					j++;
			}
			if (needle[j] == '\0')
				return (haystack + start);
		}
		i++;
	}

	return (0);
}
