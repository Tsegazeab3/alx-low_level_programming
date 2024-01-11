#include <stdio.h>
/**
 * main - prints a possible combination of two digits
 * Return: 0
 */
int main(void)
{
	int first_digit = 48;
	int second_digit;

	while (first_digit <= '8')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '9')
		{
			putchar(first_digit);
			putchar(second_digit);
			if (first_digit != '8')
			{
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
