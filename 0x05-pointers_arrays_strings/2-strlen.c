#include "main.h"
/**
 * _strlen - counts the number of characters in a string
 * @s: string of characters
 * Return: the number of characters in a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
