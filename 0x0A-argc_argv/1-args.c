#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed to it
 * @argc: Number of arguments passed to the main function
 * @argv: Vector of arguments passed to the main function
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
