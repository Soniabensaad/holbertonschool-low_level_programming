#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * @op_add: The operator of addition
 * @a: integer first parameter
 * @b: integer second parameter
 * 
 * Return: add
 */
int op_add(int a, int b)
{
    return (a + b);
}
/**
 * @op_sub: The operator of substraction
 * @a: integer first parameter
 * @b: integer second parameter
 * 
 * Return: sustraction
 */
int op_sub(int a, int b)
{
    return (a - b);
}
/**
 * @op_mul: The operator of multiplication
 * @a: integer first parameter
 * @b: integer second parameter
 * 
 * Return: multiplication
 */
int op_mul(int a, int b)
{
    return (a * b);
}
/**
 * @op_div: The operator of division
 * @a: integer first parameter
 * @b: integer second parameter
 * 
 * Return: division 
 */

int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit (100);
    }
    return (a / b);
}
/**
 * @op_mod: The operator of modulation
 * @a: integer first parameter
 * @b: integer second parameter
 * 
 * Return: remainder of division 
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit (100);
    }
    return (a % b);
}