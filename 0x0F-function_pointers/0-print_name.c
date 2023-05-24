#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: The name to be printed
 * @f: Pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
