#include "main.h"

/**
 * prints the sign of a number - Entry point
 *
 * Description: sign of a number positive or negative
 *
 * Return: Always void (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}

