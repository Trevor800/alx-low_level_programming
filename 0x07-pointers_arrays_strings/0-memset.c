#include "main.h"

/**
 * _memset - function that fills memory with a specific value
 * @s: starting address of memory to be filled
 * @b: function is the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n> 0; i++)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
