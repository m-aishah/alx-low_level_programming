#include <stdio.h>

/**
 * main - The Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);

		if (i < 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
