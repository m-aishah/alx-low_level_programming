#include "main.h"

/**
 * _pow_recursion - Function that finds the power of a number
 *			raised to the power of another number
 * @x: base number
 * @y: power
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	int output = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	output *= _pow_recursion(x, y - 1);

	return (output);
}
