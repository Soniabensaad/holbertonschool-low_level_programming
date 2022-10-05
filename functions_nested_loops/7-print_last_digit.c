#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: integer
 *
 * Description: 'prints the last digit of a number.'
 *
 * Return: integer
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
