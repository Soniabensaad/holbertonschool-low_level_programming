#include "main.h"
#include <stdio.h>
/**
 * _memcpy- copies n bytes from memory to another.
 *
 * @s: char
 * @n:number of spaces to fill
 * @b:byte to fill with
 *
 * Description: function that copies n bytes from memory to another.
 *
 * Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
