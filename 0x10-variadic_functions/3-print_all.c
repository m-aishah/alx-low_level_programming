#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_character - A function that prints char
 * @arg: Arguments pointing to character to be printed
 *
 * Return: void
 */

void print_character(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_integer - A function that prints int
 * @arg: Arguments pointing to integer to be printed
 *
 * Return: void
 */

void print_integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - A function that prints float
 * @arg: Arguments pointing to float to be printed
 *
 * Return: void
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - A function that prints string
 * @arg: Arguments pointing to string to be printed
 *
 * Return: void
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - A function that prints anything
 * @format: list of type of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_character},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
