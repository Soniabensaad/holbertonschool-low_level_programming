#include "main.h"
#include <stdio.h>
/**
 * _strstr-locates a substring
 *
 * @haystack: char
 * @needle:char
 *
 * Description: a function that   locates a substring
 *
 * Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b] && (haystack[a] == needle[0]); b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}

		if (needle[b])
			b = 0;

		else
			return (haystack + a);
	}
	return (0);
}
