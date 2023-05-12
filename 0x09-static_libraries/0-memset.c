#include "main.h"

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
