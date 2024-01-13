#include "main.h"
/**
 * times_table - times table starting with 0
 */
void times_table(void)
{
	int upper_table = 0;

	while (upper_table <= 9)
	{
		int lower_table = 0;

		while (lower_table <= 9)
		{
			int product = lower_table * upper_table;
			int rem = product % 10;
			int root = (product - rem) / 10;

			if (product <= 9)
			{
				if (lower_table == 0)
				{
					_putchar ('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + rem);
				}
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar('0' + root);
				_putchar('0' + rem);
			}
			lower_table++;
		}
		_putchar('\n');
		upper_table++;
	}
}
