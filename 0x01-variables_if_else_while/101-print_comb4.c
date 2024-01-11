#include <stdio.h>
/**
 * main - prints a possible combination of two digits
 * Return: 0
 */
int main(void)
{
	int first_digit = 48;
	int second_digit;
	int third_digit;

	while (first_digit <= '7')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '8')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				putchar(first_digit);
				putchar(second_digit);
				putchar(third_digit);
				if (first_digit != '7')
				{
					putchar(',');
					putchar(' ');
				}
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
