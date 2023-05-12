#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: String 1
 * @src: String 2
 * @n: Maximumm number of bytes
 * Return: Concatenated String
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
