#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in upper case
 * Return: 0
 */
int main(void)
{
	int k = 65;

	while (k <= 90)
	{
		putchar(k);
		putchar(k + 32);
		putchar('\n');
		k++;
	}
	return (0);
}
