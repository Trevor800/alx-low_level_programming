#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n:value of bit
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*sizeof(unsigned long int * 6);*/

	if (index > sizeof(n) * 6)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
