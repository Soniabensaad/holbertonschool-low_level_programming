#include "main.h"
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
int check_palindrome(char str)
{
    char = str[];
    int a ;
    int b = strlen(str - 1);
    if (b > a)
    {
        str[a++] != str[b--];
        return (0);
    }
    else
    {
        str[a++] = str[b--];
        return (0);
    }

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
    return (check_palindrome(char*str));
}