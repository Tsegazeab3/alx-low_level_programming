#include "main.h"
/**
 * print_to_98 - prints from any number to 98
 * @n: number to be checked
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		int k;
		int divisor;

		if (n < 0)
		{
			_putchar('-');
			k = -n;
		}
		else
		{
			k = n;
		}
		divisor = 1;
		while (k / divisor > 9)
		{
			divisor *= 10;
		}
		while (divisor > 0)
		{
			_putchar ('0' + (k / divisor));
			k %= divisor;
			divisor /= 10;
		}
		_putchar (',');
		_putchar (' ');
		if (n > 98)
			n--;
		else
			n++;

	}
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}

	_putchar('\n');
}
