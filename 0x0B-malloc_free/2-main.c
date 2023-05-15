#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s1, *s2, *s3;

    s1 = str_concat("Hello", NULL);
    s2 = str_concat(NULL, "Hello");
    s3 = str_concat(NULL, NULL);
    if (s1 == NULL)
    {
        printf("failed\n");
        return (1);
    }
    if (s1 == NULL)
    {
        printf("failed\n");
        return (1);
    }
    if (s1 == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n%s\n%s", s1, s2, s3);
    free(s1);
    free(s2);
    free(s3);
    return (0);
}
