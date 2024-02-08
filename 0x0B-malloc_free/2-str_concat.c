#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: final string
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == null)
		s1 = "";
	if (s2 == null)
		s2 = "";
	char *p = (char *)calloc((strlen(s1) + strlen(s2) + 1), sizeof(char));
	int i = 0;
	int j = 0;

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
