#include <stdio.h>

/**
 * main - possible combinations of single-digit numbers
 *
 * Return: Always 0.
 */

int main(void)
{
int let;

for (let = '0'; let <= '9'; let++)
{
if (let != '0')
{
putchar(',');
putchar(' ');
}
putchar(let);
}
putchar('\n');
return (0);
}
