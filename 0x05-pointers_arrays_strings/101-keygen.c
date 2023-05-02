#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program to generate random valid passwords 
 * for the program '101-crackme'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[84];
	int i = 0, sum = 0, dhalf1, dhalf2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		dhalf1 = (sum - 2772) / 2;
		dhalf2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			dhalf1++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + dhalf1))
			{
				password[i] -= dhalf1;
					break;
			}
		}

		for (i = 0; password[i]; i++)
                {
                        if (password[i] >= (33 + dhalf2))
                        {
                                password[i] -= dhalf2;
                                        break;
                        }
                }
	}

	printf ("%s", password);

	return (0);
}
