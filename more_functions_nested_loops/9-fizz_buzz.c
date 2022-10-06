#include "main.h"
/**
 * main - check the code
 *
 * @n:integer
 *
 * Description:The “Fizz-Buzz test”
 *
 * Return: void
 */
int main (void)
{
int n;
for (n =1; n < 101; n++)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        _putchar('F');
        _putchar('i');
        _putchar('z');
        _putchar('z');
        _putchar('B');
        _putchar('u');
        _putchar('z');
        _putchar('z');
    }
    else if (n % 3 == 0)
    {   _putchar('F');
        _putchar('i');
        _putchar('z');
        _putchar('z');

    }
    else if (n % 5 == 0)
    {   _putchar('B');
        _putchar('u');
        _putchar('z');
        _putchar('z');

    }
    else 

    {
        _putchar(n +'0');
    }
    if (n != 100)
    {
        _putchar(' ');
    }
}
_putchar('\n');
return(0);
}

