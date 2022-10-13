#include "main.h"
#include <stdio.h>
/**
 * _memset- fills the first n bytes of the memory
 *
 * @s: char
 * @n:number of spaces to fill
 * @d:byte to fill with
 *
 * Description: function fills the first n bytes of the memory
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}

