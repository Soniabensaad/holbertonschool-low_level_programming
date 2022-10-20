#include "main.h"
/**
*length - 0
*@s: string
*Return: length of str
*/
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
 * check - checks a palindrome
 *@s: char
 *@check: char
 *
 *Description: checks palindrome
 *
 * Return: check
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
 * is_palindrome - returns 1 if the input integer is a prime
 *
 *@length:integer
 *@s:char
 *
 *Description: returns if the input char is a palindrome or not
 *
 * Return: palindrome
 */
int is_palindrome(char *s)
{
return (check(s, 0, length(s) -1));
}
