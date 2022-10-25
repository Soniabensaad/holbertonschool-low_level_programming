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
	unsigned int i = 0, x, e;
	char *string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		i++;

	string = malloc(sizeof(*string) * i + n + 1);

	if (string == 0)
		return (NULL);

	for (x = 0, e = 0; x < (i + n); x++)
	{
		if (x < i)
			string[x] = s1[x];

		else
			string[x] = s2[e++];
	}
	string[x] = '\0';

	return (string);
}
