#include "main.h"
/**
 * print_rev - prints a string in reverse folloewd by a new line
 * @s: string that is reversed
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
