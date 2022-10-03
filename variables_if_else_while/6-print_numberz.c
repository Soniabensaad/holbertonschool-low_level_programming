#include <stdio.h>

/**
 * main - Prints  all single digit numbers of base 10 starting from 0, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int letter;

	for (letter ='0'; letter <='9'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
