#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the digit to be checked
 * Return: 0 or 1 depending on the sult
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
