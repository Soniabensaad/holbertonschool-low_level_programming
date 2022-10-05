#include "main.h"

/**
 * _last_digit - prints the  last digit of a number
 *
 * @r:int
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
    int r;
    _putchar('0' + (r % 10));
    _putchar('\n');
    return (r);
}
