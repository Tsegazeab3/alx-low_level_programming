#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: spearator of the strings
 * @n: number of strings
 * i am allowed to use printf
 * if separator is NULL, i don't print it
 * if one of the string is NULL,print(nile) instead
 * print a new line at the end of my function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
