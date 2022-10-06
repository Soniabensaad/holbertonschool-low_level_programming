#include "main.h"
/**
 * print_line -prints a straight line in the terminal.
 *
 * Description: draws a straight line in the terminal.
 *
 * Return: void
 */
void print_line(int n)
{
    int a;
    if (n > 0)
        {
            for (a = 0; a < n; a++)
            {
                _putchar('_');
            }
        }
    _putchar('\n');
}
