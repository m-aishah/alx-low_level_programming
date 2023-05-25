#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Number of parameters to be added
 *
 * Return: if n == 0 - 0
 *		else - sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
