#include "main.h"
/**
 * _islower - a function that checks a lowercase character
 *
 * @c: char
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
