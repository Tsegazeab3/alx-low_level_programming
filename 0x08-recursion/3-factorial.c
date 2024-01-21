#include "main.h"
/**
 * factorial - calculates the factorial of the number
 * @n: the number that the factorial is focused on
 * Return: the final num
 */
int factorial(int n)
{
	int final_num;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	final_num = n * factorial(n - 1);
	return (final_num);
}
