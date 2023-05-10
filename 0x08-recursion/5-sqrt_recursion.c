#include "main.h"

/**
 * _sqrt - Function that returns the natural square root of a number
 * @n: The number in question
 * @root: The root to be tested
 *
 * Return: if @n has a natural root - natural square root of @n
 *	if @n does not have a natural root - -1
 */

int _sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: The number in question
 *
 * Return: natural square root of @n
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}

