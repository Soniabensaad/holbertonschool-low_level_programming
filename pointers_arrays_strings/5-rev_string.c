#include "main.h"
/**
 * rev_string-reverses a string.
 *
 * @s:char
 *
 * Description: function that reverses a string. 
 *
 * Return: void
 */
void rev_string(char *s)
{
int i ;
int k;
int c;
char *a, temp;
a = s;

while (s[c] != ('\0'))
{
c++;
}
for (k = 1; k < c; k++)
{
a++;
}
for(i = 0; i < (c / 2); i++)
{
    temp = s[i];
    s[i] = *a;
    *a = temp;
    a++;
}


}

