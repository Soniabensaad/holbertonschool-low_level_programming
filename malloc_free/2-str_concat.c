#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer copy of string
 *
 * @str1: char
 * @str: char
 *
 * Description: a function that returns a pointer copy of string
 * 
 * Return: pointer or NULL
 */

char *str_concat(char *str1, char *str2)
{
    char *s;
    int a, b, k, e;
    a = 0;
    b = 0;
    e = k - a;

    

    if (str1 == NULL)
    {
        return (NULL);
    }
    if (str2 == NULL)
    {
        return (NULL);
    }
    while (str1[a] != '\0')
    {
        a++;
    }
    while (str2[b] != '\0')
    {
        b++;
    }
    s = malloc(a * sizeof(*str1) + b * sizeof(*str2) +1);
    if (s == NULL)
    {
        return (NULL);
    }
   for (k = 0, e = 0; k < a + b; k++)
	{
		if (k < a)
			s[k] = str1[k];
		else
            
			s[k] = str2[e++];
            
	}

    return(s);
    
}
