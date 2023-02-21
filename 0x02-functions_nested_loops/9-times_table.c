#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

 *  * times_table - Prints the 9 times table, starting with 0.
 *   */
void times_table(void)
{
	int row, column, product, tens, ones;
	int num, mult, prod;

	for (row = 0; row <= 9; row++)
	for (num = 0; num <= 9; num++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			_putchar('0');

			for (mult = 1; mult <= 9; mult++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
						_putchar(',');
						_putchar(' ');

						prod = num * mult;

						if (prod <= 9)
							_putchar(' ');
						else
							_putchar((prod / 10) + '0');

						_putchar((prod % 10) + '0');
					}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
