#include "main.h"
#include <stdio.h>
/**
 * _strcpy -copies the string pointed
 *
 * @dest:char
 * @src: char
 *
 * Description:  a function that copies the string pointed
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
do {
*(dest + index) = *(src + index);
} while (*(src + index++));
return (dest);
}
