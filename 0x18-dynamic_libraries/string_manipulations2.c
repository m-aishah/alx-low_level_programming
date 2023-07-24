#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: destination String
 * @src: Source string
 * @n: Number of bytes
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

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

/**
 * _memset - Function that fills memory with a constatnt byte
 * @s: Pointer to memory
 * @b: Constant byte to be stored
 * @n: Number of bytes of memory area to be filled
 *
 * Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _memcpy - Function that copies
 * a number of bytes from one memory to another
 *
 * @dest: memory destination
 * @src: Source of copied memory
 * @n: Number of bytes to be copied
 *
 * Return: A pointer to the destination mempry area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}


