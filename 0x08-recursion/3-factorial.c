#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: Th number in question
 *
 * Return: if @n > 0 - factorial of @n
 *         if @n < 0 - -1 (Error)
 */

int factorial(int n)
{
	int output = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	output *= factorial(n - 1);

	return (output);
}
