#include "main.h"
#include <stdio.h>
/**
 * leet-encodes a string into 1337.
 *
 * @s:char
 *
 * Description:a function that encodes a string into 1337.
 *
 * Return: void
 */
char *leet(char *s)
{
	int i, j;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (x[j] == *(s + i))
				*(s + i) = y[j];
		}
	}
	return (s);
}
