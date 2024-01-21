#include "main.h"
/**
 * puts2 - prints a string one number apart
 * @str: string to go through the process
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 2;
	}
	_putchar('\n');
}
