#include "main.h"
/**
 * print_alphabet - prints the alphabets
 * Return - None
 */
void print_alphabet(void)
{
	int k = 97;
	while (k <= 122)
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');
}

