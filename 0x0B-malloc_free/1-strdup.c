#include "main.h"
/**
 * _strdup - copies an array
 * @str: string to be copied
 * Return: the location of the first string
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		int i = strlen(str);
		char *p = (char *)calloc((i + 1),sizeof(char));
		int j = 0;

		while (j < i)
		{
			p[j] = str[j];
			j++;
		}
		p[j] = '\0';
		return (p);
	}
	else
		return (NULL);
}
