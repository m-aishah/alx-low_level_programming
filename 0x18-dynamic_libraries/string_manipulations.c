#include "main.h"

/**
 * _strlen - Function to return the length of a string
 * @s: pointer to the string
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length += 1;
	return (length);
}

/**
 * _strcpy - A function that copies a string pointed to by @src, including
 *           the terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _atoi - Function to convert a string to an integer
 * @s: String to be converted
 * Return: The integer value of the converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}

/**
 * _strcat - Function that concatenates two strings
 * @dest: String 1
 * @src: String 2
 * Return: concatenated character
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}

/**
 * _strncat - Function that concatenates two strings
 * @dest: String 1
 * @src: String 2
 * @n: Maximumm number of bytes
 * Return: Concatenated String
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
