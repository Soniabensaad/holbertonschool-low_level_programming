#include "main.h"
/**
 * print lowercase character - Entry point
 *
 * Description: check for lowercase character
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