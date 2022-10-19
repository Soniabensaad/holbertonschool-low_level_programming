#include "main.h"

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
{
int i;
for(i=0; i<argc ;i++)
{
printf("%s\n",argv[i]);
}
return 0;
}
}
