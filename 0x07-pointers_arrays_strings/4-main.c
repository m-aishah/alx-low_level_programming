#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "aaa";
    char *t;

    t = _strpbrk(s, f);
    if (*t == '\0')
	    printf("Nope!!");
    return (0);
}
