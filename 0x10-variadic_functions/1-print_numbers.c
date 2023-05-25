#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that print numbers followed by a line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(numbers);
}
