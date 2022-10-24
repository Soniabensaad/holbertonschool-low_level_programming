#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array.
 *
 */
char *argstostr(int ac, char **av)
{
char *s;
int i, j, m = 0, len = 0;
if (ac == 0 || av == 0)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
}
len += ac;
s = malloc(sizeof(char) * len + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[m] = av[i][j];
m++;
}
if (s[m] == '\0')
{
s[m++] = '\n';
}
}
return (s);
}
