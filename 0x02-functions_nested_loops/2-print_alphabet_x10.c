#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: ALways 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
