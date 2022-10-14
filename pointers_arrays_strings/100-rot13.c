#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13.
 *
 * @rot13: char
 * @alphabet:char
 * @str:char
 *
 * Description: a function that encodes a string using rot13.
 * Return: 0
*/
char *rot13(char *str)
{
	int i, j;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
