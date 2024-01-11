#include <stdio.h>
/**
 * main - prints ever single digit number
 * Return: 0
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		printf("%d", k);
		k++;
	}
	putchar('\n');
	return (0);
}
