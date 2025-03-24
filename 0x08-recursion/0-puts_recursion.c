#include "main.h"
/**
* _puts_recursion - a function that prints a string 
* @s: string
* Return: nothing
*/
void _puts_recursion(char*s)
{
	if(s[0] == '\0')
		return;
	_putchar(s[0]);
	_puts_recursion(s++);
	return;
}

