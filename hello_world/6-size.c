#include<stdio.h>
/**
 *main - Entry point for c program
 *
 *Return: Always 0 (Success)
 */
int main(void) 
{
int intType;
float floatType;
long long int longlongintType;
long int longintType;
char charType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

