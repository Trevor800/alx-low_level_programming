#include "main.h"

/**
 * set_bit - Sets value of a bit to 1 at a given index
 * @n: number to set
 * @index: index starting from 0 of the bit to set
 * Return: 1 if it worked, 0 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);
	return (1);
}
