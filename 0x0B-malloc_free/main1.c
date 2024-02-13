#include <stdio.h>
#include <stdlib.h>

int * integer (int len)
{
	int *p = (int *) calloc(len + 1, sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	p[len] = '\0';
	return (p);
}
int *position (int len,char *p)
{
	int i = 0;
	int j = 0;
	int *q = integer(len * 2);
	for (i = 0; p[i]!= '\0'; i++)
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
void main (void)
{
	char *p = "      ALX School         #cisfun      ";
	int *q = position(3,p);
	int i;
	for (i = 0; q[i] != 0;i++)
		printf("%d\n",q[i]);
}
	
