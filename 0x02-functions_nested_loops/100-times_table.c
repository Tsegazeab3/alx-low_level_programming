#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: the number of squares found
 */
void print_times_table(int n)
{
	int column = 0;
	int row = 0;

	while (row <= n)
	{
		while (column <= n)
		{
			if (column == 0)
				_putchar('0');
			else
			{
				int product = column  * row;
				int divisor = 1;

				while ((product / divisor) > 9)
				{
					divisor *= 10;
				}
					_putchar(',');
					_putchar(' ');
				if (divisor == 1)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (divisor == 10)
					_putchar(' ');
				while (divisor != 0)
				{
					_putchar('0' + (product / divisor));
					product %= divisor;
					divisor = divisor / 10;
				}
			}
				 column++;
		}
			_putchar('\n');
			row++;
	}
}
