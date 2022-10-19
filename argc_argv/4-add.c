#include "main.h"
#include <stdlib.h>


/**
 * main -adds positive numbers.
 *
 * @argc : integer
 * @argv : array of strings
 *
 * Description: a program that adds positive numbers.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, som;

	som = 0;

	for (a = 1; a < argc ; a++)
	{
		for (b = 1; argv[a][b] != '\0' ; b++)
		{
			if (argv[a][b] < 47 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		som = som + atoi(argv[a]);
	}
	printf("%d\n", som);
	return (0);
}

