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
{int i, mul = 1;
    if (argc != 3)
    {
        
        printf("%s\n", "error");
        return (1);
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            mul *= atoi (argv[i]);
        }
        printf("%d\n", mul);
        
    }
    return (0);


}
