#include<studio.h>
/**
 *main - Entry point for c program
 *
 *Return: Always 0 (Success)
 */
int main(void) {
int intType;
float floatType;
long long int inType;
long int inType;
char charType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(long intType));
printf("Size of long long int: %zu bytes\n", sizeof(long long intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}

