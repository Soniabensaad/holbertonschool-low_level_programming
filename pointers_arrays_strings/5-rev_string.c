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
	int i, length, temporaire;

	length = 0;
	while (s[length] != '\0')
	{
	length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temporaire = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temporaire;
	}
}
