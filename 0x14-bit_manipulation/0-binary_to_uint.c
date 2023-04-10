#include "main.h"

/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: String of binary 0 and 1
 * Return: converted number
 * or 0 if @b is NULL or contains non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int check = 0;
	unsigned int b_jey = 0;

	if (!b)
		return (0);

	while (b[check] != '\0')
	{
		if (b[check] == '0' || b[check] == '1')
		{
			b_jey <<= 1;
			b_jey += b[check] - '0';
			check++;
		}
		else
			return (0);
	}

	return (b_jey);
}
