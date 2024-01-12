#include "main.h"
/**
 * main - prints _putchar
 * Return: 0
 */
int main(void)
{
	char letter[] = "_putchar";
	int k = 0;

	while (k < 8)
	{
		_putchar(letter[k]);
		k++;
	}
	_putchar('\n');
	return (0);
}
