#include "main.h"
#include <stdio.h>
/**
 * _strncpy -copies the string pointed
 *
 * @dest:char
 * @src: char
 * @n: integer
 *
 * Description:  a function that copies the string pointed
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && (*(src + i)) != '\0'; i++)
{
*(dest + i) = *(src + i);
}
while (i < n)
{
*(dest + i++) = '\0';
}
return (dest);
}


