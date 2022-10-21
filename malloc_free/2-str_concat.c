#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer copy of string
 *
 * @str1: char
 * @str2: char
 *
 * Description: a function that returns a pointer copy of string
 * 
 * Return: pointer or NULL
 */

char *str_concat(char *str1, char *str2)
{
char *s;
int a, b, k;
a = 0;
b = 0;
k = 0;
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
while (k < a)
{
s[k] = str1[k];
k++;
}
while (k < a + b)
{
s[k] = str2[k - a];
k++;
}
s[k] = '\0';
return(s);   
}
