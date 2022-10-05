#include "main.h"
/**
 * _islower - a function that checks a lowercase character
 *
 * @c: input lowercase character
 *
 * Return: Always void (Success)
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
