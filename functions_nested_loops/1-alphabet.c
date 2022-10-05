#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description:prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
int j;

for (j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
