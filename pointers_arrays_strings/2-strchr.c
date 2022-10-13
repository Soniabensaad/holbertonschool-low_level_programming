#include "main.h"
#include <stdio.h>
/**
 * _strchr- locates a character in a string.
 *
 * @src: char
 * @n:number of spaces to fill
 * @dest:char
 *
 * Description: a function that locates a character in a string.
 *
 * Return: 0
*/
char *_strchr(char *s, char c)
{
 int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	
if (*(s + i) == c)
		return (s + i);
	return (0);
}
