#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @op_mod: The operator of modulation
 * @a: integer first parameter
 * @b: integer second parameter
 * 
 * Return: remainder of division 
 */
int (*get_op_func(char *s))(int, int)
{
    int i = 0;
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    


    while(ops[i].op)
    {
        if (!strcmp(s, ops[i].op))
        {
            return (NULL);
        }
        i++;
    }
    return (ops[i].f);
}