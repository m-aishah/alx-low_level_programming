#include "main.h"
#include <stdlib.h>

/**
 * concatenate - Function to concatenate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string
 */

char *concatenate(char *s1, char *s2)
{
	int i, l1 = 0, l2 = 0, j = 0;
	char *s3;

	for (i = 0; s1[i]; i++)
		l1++;
	if (s2 == NULL)
	{
		s3 = (char *)malloc((sizeof(char) * l1) + 1);
		for (i = 0; i < l1; i++)
			s3[i] = s1[i];
		s3[i] = '\0';
		return (s3);
	}
	for (i = 0; s2[i]; i++)
		l2++;

	s3 = (char *)malloc((sizeof(char) * (l1 + l2)) + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		s3[i] = s1[i];
	for (i = l1; i < (l1 + l2); i++)
	{
		s3[i] = s2[j];
		j++;
	}
	s3[i] = '\0';

	return (s3);
}
/**
 * str_concat - Function that concatenates 2 strings
 * @s1: The first string
 * @s2: Te second string
 *
 * Return: On success - a pointer to the concatenated string
 *		Else - NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, l2 = 0;
	char *s3;

	if (s1 == NULL)
	{
		if (s2 == NULL)
		{
			s3 = (char *)malloc(1);
			*s3 = '\0';
		}
		for (i = 0; s2[i]; i++)
			l2++;

		s3 = (char *)malloc((sizeof(char) * l2) + 1);

		if (s3 == NULL)
			return (NULL);
		for (i = 0; i < l2; i++)
			s3[i] = s2[i];
		s3[i] = '\0';

		return (s3);

	}

	s3 = concatenate(s1, s2);

	return (s3);
}
