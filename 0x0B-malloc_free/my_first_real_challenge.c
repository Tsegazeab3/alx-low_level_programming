#include "main.h"
/**
 * string - creates an array of strings
 * @len: string length
 * Return: array of strings
 */
char *string(int len)
{
	char *p = (char *) calloc(len + 1, sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	p[len] = '\0';
	return (p);
}
/**
 * integer - creates an integer array
 * @len: length of the array
 * Return: an integer array
 */
int *integer(int len)
{
	int *p = (int *) calloc(len + 1, sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	p[len] = '\0';
	return (p);
}
/**
 * word_counter - counts the number of words in a sentence
 * @p: string to be counted
 * Return: no_of_words
 */
int word_counter(char *p)
{
	int no_words = 0;
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == ' ')
			continue;
		else
		{
			no_words++;
			while (p[i] != ' ' && p[i] != '\0')
				i++;
		}
	}
	return (no_words);
}
/**
 * copier - copies string from a strating point to a length
 * @start: beginning point
 * @len: length of string
 * @p: string
 * Return: the copied string
 */
char *mover(int start, int len, char *p)
{
	char *new = string(len);
	int i;
	int j = 0;

	for (i = start; i < start + len - 1; i++)
	{
		new[j] = p[i];
		j++;
	}
	return (new);
}
int *position(int len, char *p)
{
	int i = 0;
	int j = 0;
	int *q = integer(len * 2);

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == ' ')
			continue;
		else
		{
			q[j] = i;
			j++;
			while (p[i] !=' ' && p[i])
			{
				i++;
			}
			q[j] = i - 1;
			j++;
		}
}
	return (q);
}
/**
 * strtow - splits a string into words
 * @str: string of two words separated by a space
 * Return: 2D string containing pointers
 */
char **strtow(char *str)
{
	int no_words = word_counter(str);
	int *pos_words = position(no_words,str);
	int *len = integer(no_words);
	char **p;
	int i , j = 0, k = 0;

	for (i = 0; j < no_words; i++)
	{
		len[j] = pos_words[i + 1] -  pos_words[i] + 2;
		printf("%d, %d \n", pos_words[i + 1], pos_words[i]);
		j++;
		i++;
	}
	p = (char **) malloc ((no_words + 1) * sizeof(char *));
	if (p == NULL)
	{
		free (pos_words);
		free (len);
	}
	for (i = 0; i < no_words; i++)
	{
		p[i] = mover(pos_words[k],len[i],str);
		k += 2;
	}
	p[i] = NULL;
	return(p);
}
