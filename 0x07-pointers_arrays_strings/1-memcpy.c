#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: function of memory where is stored
 * @src: function where memory is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted change
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < 1; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
