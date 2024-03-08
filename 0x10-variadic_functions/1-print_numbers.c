#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: a string a string that should be located between the numbers
 * @n: the number of integers passed to the function
 * we're allowed o used printf
 * if separator is NULL, don't print it
 * we have to print a new line at the end of our function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list integers;

	va_start(integers, n);
	printf("%d", va_arg(integers, int));
	for (i = 0; i < n; i++)
	{
		if (separator)
			printf("%s%d", separator, va_arg(integers, int));
		else
			printf("%d", va_arg(integers, int));
	}
	va_end(integers);
	printf("\n");
}
