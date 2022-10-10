#include "main.h"
#include <stdio.h>
/**
 * _strlen -function that returns the length of a string.
 *
 * @s:char
 *
 * Description:returns the length of a string
 *
 * Return: 0
 */
int _strlen(char *s)
{
int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
 
    return length;
}
