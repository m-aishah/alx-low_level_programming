#include "main.h"
/**
 * print_alphabet- Function to print alphatet in lowercase,
 * followed by a line
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar ('\n');
}
