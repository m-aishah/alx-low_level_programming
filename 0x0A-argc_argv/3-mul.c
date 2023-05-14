#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies 2 numbers
 * @argc: Number of arguments passed into the main function
 * @argv: A vector of arguments passed into the main function
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
