#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = a+1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
