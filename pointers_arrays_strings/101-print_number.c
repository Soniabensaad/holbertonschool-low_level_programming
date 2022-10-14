#include "main.h"
#include <stdio.h>
/**
 * print_number - function with one argument
 *
 * @b: int type argument
 *
 * Description: prints an integer
 *
 * Return: value of n
*/
void print_number(int b)
{
	if (b < 0)
	{
		_putchar('-');
		if (b < -9)
			print_number(b / -10);
	_putchar ('0' - b % 10 );
	}
	else
	{
		if (b > 9)
			print_number(b / 10);
		_putchar(b % 10 + '0');
	}
}
