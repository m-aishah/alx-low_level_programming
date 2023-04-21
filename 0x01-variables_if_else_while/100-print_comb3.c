#include <stdio.h>
/**
 * main - Entry point
 * A program to print all possible combinations of 2 digits
 * Return: Always 0 (Success)
 */
int main (void)
{
	int n1=48, n2=49;

	for (; n1<=56 && n2<=57;){

		if (n1 < n2)
		{
                        putchar(n1);
                        putchar(n2);
                        n2++;

                        if ((n1 == 56) && (n2 == 57))
                                continue;

			putchar(',');
                        putchar(' ');

                        if (n2 == 57)
                        {
                                n1++;
                                n2 =49;
                        }
                        
		}
		else if (n1==n2)
			continue;

		else if (n1 > n2)
			continue;

	
	}
	putchar('\n');
	return 0;
}
