#include <stdio.h>

/**
 * main -that prints the lowercase alphabet in reverse
 *
 * Return: Always 0.
 */

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
