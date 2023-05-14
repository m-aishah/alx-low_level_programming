#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_change - Function to calculate the change
 * @input: Amount of money fromwhich change is to be calculated
 *
 * Return: change
 */
int calculate_change(int input)
{
	int change = 0;

	while (input >= 1)
	{
		if (input >= 25)
		{
			change += input / 25;
			input %= 25;
		}
		else if (input >= 10)
		{
			change += input / 10;
			input %= 10;
		}
		else if (input >= 5)
		{
			change += input / 5;
			input %= 5;
		}
		else if (input >= 2)
		{
			change += input / 2;
			input %= 2;
		}
		else if (input == 1)
		{
			change += 1;
			input %= 1;
		}
	}
	return (change);
}

/**
 * main - A program that prints the minimum coins
 *	to make change for an amount of money
 * @argc: Number of arguments passed into the main function
 * @argv: Vector of arguments passed into the main function
 *
 * Return: if number of arguments is not 1 - 1
 *		else - 0 (Success)
 */

int main(int argc, char *argv[])
{
	int input, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);
	if (input < 0)
		printf("%d\n", change);
	else
	{
		change = calculate_change(input);
		printf("%d\n", change);
	}

	return (0);
}
