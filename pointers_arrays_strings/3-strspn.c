#include "main.h"
#include <stdio.h>
/**
 * _strspn- gets the length of a prefix substring.
 *
 * @s: char
 * @accept:char
 *
 * Description: a function that gets the length of a prefix substring
 *
 * Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (!(*(accept + j)))
			break;
	}

	return (i);
}
