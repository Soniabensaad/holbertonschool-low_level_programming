#include "main.h"
#include <stdio.h>
/**
 * _puts -prints a string, followed by a new line.
 *
 * @str:char
 *
 * Description: function that prints a string, followed by a new line
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

