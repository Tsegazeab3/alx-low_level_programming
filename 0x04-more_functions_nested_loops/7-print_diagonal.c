#include "main.h"
/**
 * print_diagonal - pints n diagonal
 * @n: number of spaces
 */
void print_diagonal(int n)
{
	int k = 0;
	int i = 1;
		
	while (k <= n)
	{
		while (i < n)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		k++;
	}
}	
