#include <stdlib.h>
#include <time.h>
#include <time.h>
/**
*main - Entry point 
*
* Descritption :'n is possitive or negative'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
        { 
          prinf("%d is negative\n", n);

	return (0);
	else if (n == 0)
        {
          prinf("%d is zero\n", n);

        return (0);
	else (n > 0)
        {
          prinf("%d is positive\n", n);

        return (0);
}
