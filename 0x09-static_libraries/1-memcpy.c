#include "main.h"

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
