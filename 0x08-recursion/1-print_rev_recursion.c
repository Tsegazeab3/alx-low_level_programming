#include "main.h"
/**
* _print_rev_recursion - prints the string but does it from the back
* @s: string
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
