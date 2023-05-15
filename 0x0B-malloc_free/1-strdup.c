#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns pointer to newly allocated memory space,
 *		that contains a copy of the string given as a parameter
 * @str: The string to be copied
 * Return: On success, pointer to the duplicate string
 *		else, NULL
 */

char *_strdup(char *str)
{
	int l = 0, i;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	duplicate = (char *)malloc((sizeof(char) * l) + 1);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
