#include "main.h"
#include <stdio.h>
/**
 * _strcmp- compares two strings..
 *
 * @s1:char
 * @s2:char
 *
 * Description:   a function that compares two strings.
 *
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
int sous = 0;
int i;
while (sous == 0 && *s1 && *s2)
{
sous = *(s1++) - *(s2++);
i++;
}
return (sous++);
}

