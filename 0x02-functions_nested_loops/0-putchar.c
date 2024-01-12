#include "main.h"
/**
 * main - prints _putchar
 * Return: 0
 */
int main(void)
{
	char letter[] = "_putchar";
	int k = 0;
	int size = sizeof(letter) / sizeof(letter[0]);

	while (k < size)
	{
		_putchar(letter[k]);
		k++;
	}
	_putchar('\n');
	return (0);
}
