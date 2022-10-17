#include "main.h"

/**
* _pow_recursion - a function that calculate x raised by y
* @x:the official integer
* @y:the raised integer
* Return: return the number after calculation
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}

