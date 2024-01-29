#include "main.h"
/**
 *_isupper - check whether the symbol is uppercase or lower case
 * @c: the letter to be checked
 * Return: 0 or 1 depending on the character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
