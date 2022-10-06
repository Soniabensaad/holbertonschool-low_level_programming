#include "main.h"
/**
 * more_numbers -prints 10 times the numbers,
 *
 * Description: .prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;
char a, b;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
a = j + '0';
if (j > 9)
{
b = (j / 10) + '0';
a = (j % 10) + '0';
_putchar(b);
}
_putchar(a);
}
_putchar('\n');
}
}
