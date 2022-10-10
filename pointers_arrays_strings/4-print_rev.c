#include "main.h"
#include <stdio.h>
/**
 * print_rev-prints prints a string, in reverse.
 *
 * @s:char
 *
 * Description:  function that prints a string, in reverse
 *
 * Return: 0
 */
void print_rev(char *s)
{
int i ;
while ( s[i] != ('\0'))
{
    i++;
}
for (i = i - 1; i >= 0; i--)
{
    _putchar(s[i]);
}
_putchar('\n');
}
