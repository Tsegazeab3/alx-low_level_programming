#include "main.h"
/**
 * print_line - prints line
 * @n: number of underlines
 */
void print_line(int n)
{
	int(k) = 1;

	while (k <= n)
	{
		_putchar('_');
		k++;
	}
	_putchar('\n');
}
