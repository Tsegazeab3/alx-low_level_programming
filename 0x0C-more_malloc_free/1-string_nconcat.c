#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates a string
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters from string 2
 * Return: string of the two
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len_s1;
	size_t len_s2;
	unsigned int i;
	unsigned int j = 0;
	char *l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s2 = strlen(s2);
	len_s1 = strlen(s1);
	if (n >= len_s2)
		n = len_s2;
	l = malloc((len_s1 + n + 1) * sizeof(char));
	if (l == NULL)
	{
		printf("no memory available");
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
		l[i] = s1[i];
	for (j = 0; j < n; j++)
		l[j + len_s1] = s2[j];
	l[j + i] = '\0';
	if (l == NULL)
		return (NULL);
	return (l);
}
