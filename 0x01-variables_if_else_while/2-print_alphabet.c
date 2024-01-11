#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		putchar(k);
		putchar('\n');
		k++;
	}
}
