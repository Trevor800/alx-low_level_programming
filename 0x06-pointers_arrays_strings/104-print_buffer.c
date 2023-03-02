#include "main.h"
#include <stdio.h>
/**
 * print_line - function that prints a s bytes of a buffer
 * @c: function is the buffer to print
 * @s: function as bytes of buffer to print
 * @l: function is the line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int j, k;
for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", c[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (k = 0; k <= s; k++)
{
if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
putchar(c[l * 10 + k]);
else
putchar('.');
}
}

/**
 * print_buffer - function that prints a buffer
 * @b: function is the buffer to print
 * @size: function is the size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i;
for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
