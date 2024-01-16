#include "main.h"
/**
 * more_numbers - prints 10 time the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int k = 0;

	while (k <= 9)
	{
	int j = 0;

		while (j <= 14)
		{
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			j++;
		}
			_putchar('\n');
		k++;
	}
}
