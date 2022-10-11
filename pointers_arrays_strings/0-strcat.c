#include "main.h"
#include <stdio.h>
/**
 * _strcat- prints concatenates two strings
 *
 * @dest:char
 * @src: char
 *
 * Description:  a function that  concatenates two strings
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}


