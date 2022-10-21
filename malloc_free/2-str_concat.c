#include <stdlib.h>
#include "main.h"
/**
 *_concat - returns a concat of string
 *
 * @str1: char
 * @str2: char
 *
 * Description: a function that returns a concat of string
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
	if (str1 != NULL)
	{
		while (str1[a])
		{
			a++;
		}
	}
	if (str2 != NULL)
	{
		while (str2[b])
		{
			b++;
		}
	}
	s = malloc((a + b + 1) * sizeof(char));
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
	s[k + 1] = '\0';
	return (s);
}