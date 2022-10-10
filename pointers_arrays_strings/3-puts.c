#include "main.h"
#include <stdio.h>
/**
 * _strlen -prints a string, followed by a new line.
 *
 * @s:char
 *
 * Description: function that prints a string, followed by a new line, to stdout
 *
 * Return: 0
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

