#include <stdio.h>
/**
 * main - Entry point
 * program to print lowercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
