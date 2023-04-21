#include <stdio.h>
/**
 * main - Entry point
 * A program to print all lower case alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
