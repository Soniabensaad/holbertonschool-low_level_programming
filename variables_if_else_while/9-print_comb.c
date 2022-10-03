#include <stdio.h>

/**
 * main - possible combinations of single-digit numbers
 *
 * Return: Always 0.
 */

int main(void)
{
int letter;
for (letter = '0'; letter <= '9'; letter++)
{
putchar(',');
putchar(' ');
}
putchar(letter);
putchar('\n');
return (0);
}
