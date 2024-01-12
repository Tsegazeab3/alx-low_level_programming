#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * Return - None
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int k = 97;

		while (k <= 122)
		{
			_putchar(k);
			k++;
		}
		j++;
		 _putchar('\n');
	}
}
