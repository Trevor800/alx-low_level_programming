include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an integer
 *
 * Return: 1 (f +), 0 (if 0), -1 (if -)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
