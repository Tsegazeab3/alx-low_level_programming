#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums variable numbers of digits
 * @n: number of variables
 * Return: sum of all the numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int final_sum = 0;
	va_list nos;

	va_start(nos, n);
	for (i = 0; i < n; i++)
	{
		final_sum = final_sum + va_arg(nos, int);
	}
	va_end(nos);
	return (final_sum);
}
