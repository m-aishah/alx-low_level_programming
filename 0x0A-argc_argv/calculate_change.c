#include "main.h"

/**
 * calculate_change - Function to calculate the change
 * @input: Amount of money fromwhich change is to be calculated
 *
 * Return: change
 */
int calculate_change(int input)
{
	int change;

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
