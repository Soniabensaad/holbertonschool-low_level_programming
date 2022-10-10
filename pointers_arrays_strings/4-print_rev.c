#include "main.h"
#include <stdio.h>
/**
 * print_rev-prints prints a string, in reverse.
 *
 * @s:char
 *
 * Description:  function that prints a string, in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != ('\0'))
{
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
