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
void print_diagonal(int n)
{
    int a, b;
    if (n > 0)
    {
        for (a = 0; a < n; a++)
        {
            for (b = 1; b <= a; b++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
