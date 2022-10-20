#include "main.h"
#include <stdlib.h>


/**
 * main - prints all arguments it receives.
 *
 * @argc : integer
 * @argv : array of strings
 *
 * Description: a program that prints all arguments it receives.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int p, m;
    m = 0;
    
    

    if (argc != 2)
    {
        printf ("Error\n");
        return (1);
    }
    p = atoi(argv[1]);
    if (p < 0)
    {
        printf("0\n");
        return (0);
    }
    if (p >= 25 )
    {
        m = m + p / 25;
        p = p % 25;
    }
    if (p >= 10 )
    {
        m = m + p / 10;
        p = p % 10;
    }
    if (p >= 5 )
    {
        m = m + p / 5;
        p = p % 5;
    }
    if (p >= 2 )
    {
        m = m + p / 2;
        p = p % 2;
    }
    if (p >= 1 )
    {
        m = m + p / 1;
        p = p % 1;
    }
    printf ("%d\n", m + p);
    return (0);

    

}
