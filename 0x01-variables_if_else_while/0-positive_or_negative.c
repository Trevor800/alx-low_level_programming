#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - Determines if number is positive, negative or zero.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(%d is  positive\n, n);
	}
	if else (n == 0)
	{
		printf(%d is zero\n, n);
	}
	if else (n < 0)
	{
		printf(%d is negative\n, n);
	}
	return (0);
}	
