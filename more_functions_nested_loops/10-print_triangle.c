#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @n:integer
 *
 * Description:prints a triangle, followed by a new line.
 *
 * Return: void
 */
void print_triangle(int size)
{
    int a, b, c;
    if (size > 0)
    {
        for (a = 0; a < size; a++)
        {
            for (b = 1; b <= (size - a ); b++)
            {
                _putchar(' ');
            }
            for (c = 1; c <= a; c++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    else
    {
    _putchar('\n');
    }
    }
