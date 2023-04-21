#include <stdio.h>
/**
 * main - Entry point
 * A program to print all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			continue;
		putchar (',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
