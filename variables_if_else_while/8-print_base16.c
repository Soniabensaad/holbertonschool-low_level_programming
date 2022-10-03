#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
int letter;
for (letter = '0'; letter <= '9'; letter++)
putchar(letter);
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
