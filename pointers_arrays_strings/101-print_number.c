#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13.
 *
 * @rot13: char
 * @alphabet:char
 * @str:char
 *
 * Description: a function that encodes a string using rot13.
 * Return: 0
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