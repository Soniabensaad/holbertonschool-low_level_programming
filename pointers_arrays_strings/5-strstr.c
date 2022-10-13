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
int i, j;

	for (i = 0; (haystack + i); i++)
	{
		for (j = 0; (needle + j) && ((haystack + i) == (needle + 0); j++)
		{
			if ((haystack + i + j) != (needle + j))
				break;
		}

		if ((needle + j))
		{	
            j = 0;
        }
		else
		{
            return ((haystack + i));
        }	
	}
return (0);
}
