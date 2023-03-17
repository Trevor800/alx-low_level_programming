#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to be malloced
 * Return: returns a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == Null)
		exit(98);
	return (ptr);
}
