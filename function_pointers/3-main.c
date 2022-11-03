#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @op_mod: The operator of modulation
 * @a: integer first parameter
 * @b: integer second parameter
 * 
 * Return: remainder of division 
 */
int main(int argc, char *argv[])

{
    char op;
   int (*func)(int,int);
   

    if (argc != 4)
    {
        printf("Error\n");
        exit (98);
    }
    func = get_op_func(argv[2]);

    if(!func)
    {
        printf("Error\n");
        exit (99);

    }
    op = *(argv[2]);
    if ((op == '/' || op == '%') && (atoi(argv[3])) == 0)
    {
        printf("Error\n");
        exit (100);
    }
   
    
    printf ("%d\n", func(atoi(argv[1]), atoi(argv[3])));
    return (0);
}