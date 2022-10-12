#include "main.h"
#include <stdio.h>
/**
 * _strncat- prints concatenates two strings
 *
 * @dest:char
 * @src: char
 *
 * Description:  a function that  concatenates two strings
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (j < n && *(src + j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);
}

