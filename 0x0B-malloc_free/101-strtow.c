#include "main.h"
char * string (int len)
{
	char *p = (char *) calloc(len, sizeof(char));
	
	if (p == NULL)
	{
		free (p);
		return (NULL);
	}
	return (p);
}
int * integer (int len)
{
	int *p = (int *) calloc(len, sizeof(int));
	if (p == NULL)
	{
		free (p);
		return (NULL);
	}
	return (p);
}
char **int_pointer (int len)
{
	int **p = (int **) calloc(len, sizeof(int *));
	if (p == NULL)
	{
		free (p);
		return(NULL);
	}
	return (p)
}
int space_counter (char *p)
{
	int no_spaces;
	int i;

	for (i = 0; p[i] != 0; i++)
	{
		if p[i] = ' ';
			no_spaces++;
	}
	return (no_spaces);
}
int len_counter(int start,char *p)
{
	int i;
	int len_word = 0;
	for ( i = start; p[i] != ' '|| p[i] != '\0'; i++)
	{
		i++;
		len_word++;
	}
}
char *copier (int start,int len, char *p)
{
	char *new = string(len + 1);
	int i;
	int j = 0;

	for (i = start; i <= start + len; i++)
	{
		new[j] = p[start];
		j++;
		i++;
	}
	i[len + 1] = '\0';
	return (new);
} 
/**
 * strtow - splits a string into words
 * @str: string of two words separated by a space
 * Return: 2D string containing pointers
 */
char **strtow(char *str)
{
	int height = space_counter(str) + 1;
	int *width = 
	

