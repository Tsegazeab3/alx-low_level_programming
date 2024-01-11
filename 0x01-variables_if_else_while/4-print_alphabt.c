#include <stdio.h>
/**
 * main - prints every small letter except q and e
 * Return: 0
 */
int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		if (k != 101 && k != 113)
		{
			putchar(k);
		}
		k++;
	}
	putchar('\n');
	return (0);
}



