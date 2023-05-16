#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: Vector of arguments
 *
 * Return: On Success - Pointer to concatenated string
 *		else - NULL
 */

char *argstostr(int ac, char **av)
{
	int arg, byte, i, size = ac;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			s[i++] = av[arg][byte];
		s[i++] = '\n';
	}
	s[size] = '\0';

	return (s);
}
