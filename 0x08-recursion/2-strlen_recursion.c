#include "main.h"
/**
* _strlen_recursion - returns the length of a string
* @s: string to be counted
* Return: the number
*/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

