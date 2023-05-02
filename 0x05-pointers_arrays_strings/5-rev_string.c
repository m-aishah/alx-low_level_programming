#include "main.h"

/**
 * rev_string - Function to reverse a string
 * @s: Pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i;
	char temp = s[0];

	while (s[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
