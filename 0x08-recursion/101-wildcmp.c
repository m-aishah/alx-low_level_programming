#include "main.h"

/**
 * traverse_wild - Function that traverses through a string at a wildcard
 *			until it pints to a non-wildcard character
 * @str: The string to be traversed through
 * Return: void
 */

void traverse_wild(char **str)
{
	if (**str == '*')
	{
		(*str)++;
		traverse_wild(str);
	}
}

/**
 * _strlen_no_wilds - Function that returns the length of a string
 *			(ignoring wildcards)
 * @s: String in question
 *
 * Return: The length of the string
 */

int _strlen_no_wilds(char *s)
{
	int length = 0, i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			length++;

		i++;
		length += _strlen_no_wilds(s + i);
	}

	return (length);
}

/**
 * check_postfix - Function that checks if a string matches the postfix
 *		of another string (considering possibiliies of wildcards)
 * @s: The string in question
 * @postfix: postfix of the other string
 *
 * Return: If @s and @postfix are identical - a pointer to '\n'
 *		else - a pointer to the first unmatched character
 */

char *check_postfix(char *s, char *postfix)
{
	int s_len = _strlen_no_wilds(s) - 1;
	int postfix_len = _strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		traverse_wild(&postfix);

	if (*(s + s_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (check_postfix(s, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Function that compares two strings
 *	and checkes if they are identical
 * @s1: First string
 * @s2: Second string
 *
 * Return: If the two strings are identical - 1
 *	If they are not identical - 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		traverse_wild(&s2);
		s2 = check_postfix(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
