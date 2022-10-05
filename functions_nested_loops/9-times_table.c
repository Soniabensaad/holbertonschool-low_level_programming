#include "main.h"
/**
* times_table - multiplication table
*
*
*/
void times_table(void)
{
int a, i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
a = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (a > 9)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
else if (j == 0)
{
_putchar(a + '0');
}
else
{
_putchar(' ');
_putchar(a + '0');
}
}
_putchar('\n');
}
}
