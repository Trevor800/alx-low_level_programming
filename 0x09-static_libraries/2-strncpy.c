#include "main.h"

/**
 * _strncpy - the function copies a string
 * @dest: function is  destination string
 * @src: function is source string
 * @n: the number of bytes to copy
 * Return: function as pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
