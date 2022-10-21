#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 *
 * @A: pointer 
 * @size:integer
 *
 * Description: a function that creates an array of chars,
 *
 * Return: pointer or NULL
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
