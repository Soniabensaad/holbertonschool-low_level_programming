#include "main.h"

/**
 * _last_digit - prints the  last digit of a number
 *
 * @n:int
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
int r;

r = n % 10;
	if (r < 0)
	{
	_putchar((r * (-1)) + '0');
	return (r * (-1));
	}
	else
	{
	_putchar(r + '0');
	return (r);
	}
}
