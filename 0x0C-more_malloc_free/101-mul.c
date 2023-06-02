#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_digit(char x[]);

/**
 * main - Entry point. A function that multiples two positive numbers
 * @argc: Number of arguments in the function
 * @argv: Vector of arguments for main function
 *
 * Return: On success - 0
 *		else - exit with status of 98
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!check_digit(argv[1]) || !check_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);
}

/**
 * check_digit - Function to check if a string contains only digits
 * @x: String to be checked
 *
 * Return: If @x contains only digits - 1
 *		else - 0
 */

int check_digit(char x[])
{
	unsigned int i, size = strlen(x);

	for (i = 0; i < size; i++)
	{
		if (!(x[i] >= '0' && x[i] <= '9'))
			return (0);
	}
	return (1);
}
