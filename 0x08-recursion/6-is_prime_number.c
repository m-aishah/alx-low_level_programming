#include "main.h"

/**
 * isdivisible - Function that checks if a number
 *		is divisible by another number
 * @n: Dividend
 * @x: Divisor
 *
 * Return: If @n is diviible - 0
 *		If @n is not divisible - 1
 */
int isdivisible(int n, int x)
{
	if (n % x == 0)
		return (0);

	if (x == n / 2)
		return (1);

	return (isdivisible(n, x + 1));
}


/**
 * is_prime_number - Function to check if a number is a prime number
 * @n: Number to be checked
 *
 * Return: If @n is a prime number - 1
 *		If @n is not a prime number - 0
 */

int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (isdivisible(n, x));
}
