#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int k = 48;

	while (k <= 57)
	{
		putchar(k);
		if (k != 57)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
