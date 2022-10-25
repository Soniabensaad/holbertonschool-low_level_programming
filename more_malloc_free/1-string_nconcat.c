#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  string_nconcat- Allocates memory
  * @s1: char
  * @s2: char
  * Return: Nothing.
  */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
char *s;
    
unsigned int char1, char2, len = 0, i =0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[char1])
{
char1++;
}
while (s2[char2])
{
char2++;
}
if (n >= char2)
{
len = char1 + char2;
}
else
{
len = char1 + n;
}
s = malloc(sizeof(char) * (char1 + n + 1));
if (s == NULL)
{
return (NULL);
}
while (i < len)
{
for (i = 0; i < char1; i++)
{
s[i] = s1[i];
}
for (i = char1; i < char1 + n; i++)
{
s[i] = s2[i - char1];   
}
}
s[i] = '\0';
return (s);
}

