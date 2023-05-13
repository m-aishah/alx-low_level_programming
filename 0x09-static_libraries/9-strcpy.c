#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int x = 0;


	while (*(src + length) != '\0')
	{
		length++;
	}
	for ( ; x < length ; x++)
	{
		dest[x] = src[x];
	}
	dest[length] = '\0';
	return (dest);
}
