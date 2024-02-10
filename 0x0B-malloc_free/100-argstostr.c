#include "main.h"
/**
 * argstostr - it concatenates all the arguments of your program
 * @ac: number of argunments
 * @av: double array
 * Return: returns the argunments you have saved
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			k++;
			j++;
		}
		k++;
		i++;
	}
	p = (char *) malloc(sizeof(char) * (k + ac + 1));
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k + 1] = '\n';
	return (p);
}
