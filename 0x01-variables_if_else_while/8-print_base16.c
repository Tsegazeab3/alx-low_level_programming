#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int k = 48;
	int j = 97;

	while (k <= 57)
	{
		putchar(k);
		k++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

