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
int c;
int d;

for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 56; b++)
{
for (c = a; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);

if (a == 57 && b == 56 && c == 57 && d == 57)
{
continue;
}

putchar(',');
putchar(' ');
}
			}
}
}
putchar('\n');

return (0);
}
