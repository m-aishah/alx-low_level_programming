#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: The frst string
 * @s2: The second string
 * @n: Number of bytes of s2 to be concatenated
 *
 * Return: On success -  pointer to the concatenated string
 *		else - NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	newstring = malloc(strlen(s1) + n + 1);

	if (newstring == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		newstring[j++] = s1[i];

	for (i = 0; i < n; i++)
		newstring[j++] = s2[i];
	newstring[j] = '\0';

	return (newstring);
}
