#include <stdio.h>

/**
 * main - Program that prings all arguments it receives
 * @argc: Number of argument passed into main function
 * @argv: Vector of arguments passed into main function
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
