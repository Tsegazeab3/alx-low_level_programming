#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int k = '0';

	while (k >= '0' && k <= '9')
	{
		_putchar(k);
		_putchar('\n');
		k++;
	}
}
