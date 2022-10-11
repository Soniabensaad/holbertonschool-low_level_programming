#include "main.h"
#include <stdio.h>
/**
 * puts_half -prints print the second half of the string
 *
 * @str:char
 *
 * Description: print the second half of the string
 *
 * Return: 0
 */
void puts_half(char *str)
{
int i, length;
length = 0;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
for(i = length / 2; i < length ; i++)
{
_putchar(str[i]);
}
}
else
{
for(i = (length / 2) + 1; i < length; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
    
   