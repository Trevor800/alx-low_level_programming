#include "main.h"
/**
 * swap_int - interchange the values of two integers
 * @a: integer to interchange
 * @b: integer to interchange
 */
void swap_int(int *a, int *b);
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
