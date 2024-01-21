#include "main.h"
/**
 * _strcpy - copes the string pointed by source with the null byte
 * @dest: string to be copied into
 * @src: source of the string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
