#include "main.h"

/**
 * rev_string - Function to reverse a string
 * @s: Pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i, j = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	char rev[len-1];

	for (i = len; i < 0; i--)
	{
		rev[j] = s[i];
		j++;
	}

	for (i = 0; i < len; i++)
		s[i] = rev[i];
}
