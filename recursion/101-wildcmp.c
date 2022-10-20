/**
 * wildcmp - a function that compares two strings and returns 1 or 0
 *
 * @a : char
 * @b:char
 *
 * Description: compares two strings and returns 1 or 0
 *
 * Return: 1 or 0
 */
int wildcmp(char *a, char *b)
{
if (*a == *b && *a != '\0')
return (wildcmp(a + 1, b + 1));
if (*a == '\0')
{
if (*b == '\0')
return (1);
if (*b == '*')
return (wildcmp(a, b + 1));
}
if (*b == '*')
return ((wildcmp(a + 1, b)) || (wildcmp(a, b + 1)));
return (0);
}
