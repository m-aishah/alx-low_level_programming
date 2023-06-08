#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - A function that converts
 *		a binary number to an unsigned int
 * @b: POinter to the binary number to be converted
 * Return: if success - converted number
 *		else - 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
