#include "main.h"
#include <stdio.h>
/**
 * string_touppe -changes all lowercase letters of a string to uppercase
 *
 * @s:char
 *
 * Description:a function that changes all lowercase of a string to uppercase.
 *
 * Return: void
 */
char *string_toupper(char *s)
{
	int i, index;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		index = *(s + i);
		if (index >= 97 && index <= 122)
			*(s + i) = index - 32;
	}

	return (s);
}
