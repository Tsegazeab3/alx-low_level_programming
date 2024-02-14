#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates a string
 * @s1: string 1
 * @s2: string 2
 * Return: string of the two
*/
char *string_nconcat(char *s1, char*s2, unsigned int n)
{
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	if (n > len_s2)
		n = len_s2;
	int i = 0;
	int unsigned j = 0;
	char *l = realloc(s1,(len_s1 + n + 1));
	if (l == NULL)
	{
		printf("no memory available");
		return (NULL);
	}
	for(i = len_s1;j < n; i++)
	{
		l[i] = s2[j];
		j++;
	}
	l[i] = '/0';
	return (l);
}