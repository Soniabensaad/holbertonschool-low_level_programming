#include "main.h"
int length (char*s)
{
    int i;
    i = 1;
    if(*s != '\0')
    {
        s++;
        return (i + length(s));

    }
    return (0);

}
/**
 * prime_check - returns 1 if the input integer is a prime
 *
 *@i: counter
 *@n:integer
 *
 *Description: returns 1 if the input integer is a prime
 *
 * Return: 1 or 0
 */
int check(char*s, int i, int j)
{
    if (i > j)
    {
        return (1);

    }
    if (*(s + i) == *(s + j))
    {
        return (check(s, ++i, --j));
    }
    return (0);
}
/**
 * prime_check - returns 1 if the input integer is a prime
 *
 *@i: counter
 *@n:integer
 *
 *Description: returns 1 if the input integer is a prime
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
    return (check(s, 0, length(s) -1));
}