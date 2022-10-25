#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  string_nconcat- Allocates memory
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, k;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		i++;

	s = malloc(sizeof(*s) * i + n + 1);

	if (s == 0)
		return (NULL);

	for (j = 0, k = 0; j < (i + n); j++)
	{
		if (j < i)
			s[j] = s1[j];

		else
			s[j] = s2[k++];
	}
	s[j] = '\0';

	return (s);
}
