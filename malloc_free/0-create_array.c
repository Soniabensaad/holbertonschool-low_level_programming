#include <stdlib.h>
#include "main.h"
/**
 * wildcmp - a function that compares two strings and returns 1 or 0
 *
 * @a : char
 * @b:char
 *
 * Description: compares two strings and returns 1 or 0
 *
 * Return: 1 or 0
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *A;
    if (size == 0)
    {
        return (NULL);

    }
    A = malloc(size * sizeof(char));
    if (A == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        A[i] = c;
    }
    return (A);
}
