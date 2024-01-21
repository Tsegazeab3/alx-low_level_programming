#include "main.h"
/**
 * puts2 - prints a string one number apart
 * @str: string to go through the process
 */
void puts2(char *str)
{
	int i  = 0;
	int len = 0;

	while (str[i])
	{
		_putchar(str[len]);
		len = len + 2;
	}
	_putchar('\n');
}
