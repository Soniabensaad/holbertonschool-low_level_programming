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

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, r;

	i = 0;
	j = 0;
	k = 0;
	if (s1 != NULL)
	{
		while (s1[i])
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j])
		{
			j++;
		}
	}
	a = malloc((i + j + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	while (k < i)
	{
		a[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		a[k] = s2[k - i];
		k++;
	}
	a[k + 1] = '\0';
	return (a);
}