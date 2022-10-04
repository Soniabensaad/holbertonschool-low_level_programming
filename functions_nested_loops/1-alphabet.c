#include "main.h"
/**
 * main - Prints  prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	for(i = 97 ; i <= 122 ; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
