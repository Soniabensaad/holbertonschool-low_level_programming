#include "main.h"
/**
 * print_square -prints a square
 *
 * Description:  prints a square, followed by a new line
 *
 * Return: void
 */
void print_square(int size)
{
int i, j;
if (size> 0)
{
for (i = 0; i < size; i++)
{
    for (j = 0; j < size; j++)
    {
        _putchar('#');
    }
    _putchar('\n');

}
if (size <= 0)
{
    _putchar('\n');
}
}
}