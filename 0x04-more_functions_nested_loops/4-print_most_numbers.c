#include "main.h"
/**
 * print_most_numbers - prints all digits except 2 and 4
 */
void print_most_numbers(void)
{
	int k = '0';

	while (k >= '0' && k <= '9')
	{
		if (k != '2' && k != '4')
			_putchar(k);
		k++;
	}
	_putchar('\n');
}
