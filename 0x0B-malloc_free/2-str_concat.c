#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: final string
 */
char *str_concat(char *s1, char *s2)
{
	int j = 0;
	int i = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = (char *)calloc((strlen(s1) + strlen(s2) + 1), sizeof(char));
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i + 1] = '\0';
	return (p);
}
