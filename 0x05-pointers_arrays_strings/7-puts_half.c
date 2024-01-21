#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string that is printed in half
 */
void puts_half(char *str)
{
	int len = 0;
	int half_len;

	while (str[len] != '\0')
	{
		len++;
	}
	half_len = len / 2;
	if (len % 2 == 1)
		half_len = (len - (len - 1) / 2);
	while (len > half_len)
	{
		_putchar(str[half_len]);
		half_len++;
	}
	_putchar('\n');
}
