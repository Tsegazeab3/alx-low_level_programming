#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integers
 * @n: the number of numbers
 */
void print_array(int *a, int n)
{
	int len = 0;

	while (len <= n - 2)
	{
		printf("%d, ", a[len]);
		len++;
	}
	printf("%d\n", a[n - 1]);
}
