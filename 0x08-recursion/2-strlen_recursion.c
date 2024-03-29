#include "main.h"
/**
 * _strlen_recursion - retunrs the length of a string
 * @s: string to be counted
 * Return: an integer to be counted
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
