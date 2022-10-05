#include "main.h"

/**
 * prints the  last digit of a number- Entry point
 *
 * Description: prints the last digit of a number
 *
 * Return: Always void (Success)
 */
int print_last_digit(int n)
{
int r;
_putchar('0' + (r % 10));
_putchar('\n');
return (r);
}

