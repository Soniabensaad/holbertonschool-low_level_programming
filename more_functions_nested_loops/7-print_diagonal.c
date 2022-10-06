#include "main.h"
/**
 * print_diagonal -draws a diagonal line
 *
 * @n:integer
 *
 * Description:draws a diagonal line on the terminal. 
 *
 * Return: void
 */
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
_putchar(' ');
}
}_putchar('\\');
_putchar('\n');
}

