#include "main.h"
/**
 * _puts - prints all the characters out and a new line
 * @str: string passed through for printing
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

