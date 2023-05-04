#include "main.h"

/**
 * _strcmp - Function that compares 2 strings
 * @s1: Strin 1
 * @s2: String 2
 * Return: If str1 < str2,
 *		the negative difference of the first unmatched characters
 *	If str1 > str2,
 *		the positive difference of the first unmatched characters
 *         If str1 == str2, 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
