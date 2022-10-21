#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer copy of string
 *
 * @size:integer
 * @a:pointer of array
 *
 * Description: a function that returns a pointer copy of string
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
    char *a;
    int i;
    
    if (str == NULL)
    {
        return (NULL);
    }
    while (str != NULL)
    {
        i++;
    }
    a = malloc ((i + 1) * sizeof(str));
    if (a == NULL)
    {
        return (NULL);
    }
    else
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            a[i] = str[i];
        }
        
    }
    a[i] = '\0';
    return (a);
    



}


