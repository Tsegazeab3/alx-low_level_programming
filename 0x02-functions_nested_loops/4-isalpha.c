#include "main.h"
/**
 * _isalpha - checkes for alphabetic character
 * @c: the thing to be checked
 * Return: 0 or 1 depending on the output of the c
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
