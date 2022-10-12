#include "main.h"
#include <stdio.h>
/**
 * cap_string-capitalizes all words of a string.
 *
 * @s:char
 *
 * Description:a function that capitalizes all words of a string.
 *
 * Return: void
 */
char *cap_string(char *s)
{
	int i, j;

	char special[13] = {' ', '\t', '\n', ',', ';', '.', '!',
			    '?', '"', '(', ')', '{', '}'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + 0) >= 97 && *(s + 0) <= 122)
			*(s + 0) -= 32;
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == *(special + j))
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
					*(s + i + 1) -= 32;
			}
		}
	}

	return (s);
}