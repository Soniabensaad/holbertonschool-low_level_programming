#include <stdio.h>

/**
 * main - Prints  all single digit numbers of base 10 starting from 0, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
}
	putchar('\n');

	return (0);
}
