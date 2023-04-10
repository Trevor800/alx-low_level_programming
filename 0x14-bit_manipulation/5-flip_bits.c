#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int power = n ^ m;
	unsigned long int jey = 0;

	while (power != 0)
	{
		jey =+ (power & 1);
		power = power >> 1;
	}
	return (jey);
}
