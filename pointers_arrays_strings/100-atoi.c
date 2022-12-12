#include "main.h"
/**
 * _atoi - convert a string to an integer
 *
 * @s:pointer to string
 *
 * Description: convert a string to an integer
 *
 * Return 0
 */
int _atoi(char *s)
{
unsigned int res = 0;
int sign = 1;
while (*s != '\0' && (*s < '0' || *s > '9'))
{
if (*s == '-')
{
sign *= -1;
}
s++;
}
if (*s != '\0')
{
do {
res = res * 10 + (*s - '0');
s++;
} while (*s >= '0' && *s <= '9');
}
return (sign *res);
}

