#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  string_nconcat- Allocates memory
 * @s1: char
 * @s2: char
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s;

    unsigned int char1, i = 0, k;
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    while (s1[char1])
    {
        char1++;
    }
    
    s = malloc(sizeof(char) * (char1 + n + 1));
    if (s == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < char1 + n; i++)
        {
            if (i < char1)
            {
                s[i] = s1[i];
            }
            else
            {
                s[i] = s2[k++];
            }
        }
    s[i] = '\0';
    return (s);
}
