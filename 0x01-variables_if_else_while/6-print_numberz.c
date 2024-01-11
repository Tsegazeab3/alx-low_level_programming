#include <stdio.h>
/**
 * main - prints single digit numbers
 * Return: 0
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar('0' + k);
		k++;
	}
	putchar('\n');
	return (0);
}
