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
	int i, j;


	if (str == NULL)
	{
		return (NULL);
	}


	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}


	a = malloc(i + 1 * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (j <= i)
	{
		a[j] = str[j];
		j++;
	}
    return (a);
}


