#include"variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char*
 * any other char should be ignored
 * not allowed to use for, goto,ternary operator, else, do ... while
 * maximum of 2 while loops 2 if loops
 * cand declare a maximum of 9 variables
 * allowed to use printf
 * newline at the end
*/
void print_all(const char * const format, ...)
{
	int n = strlen(format);
	int i = 0;
	int k;
	va_list word;

	va_start(word, format);
	while (format[i])
	{
		k = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(word, int));
				break;
			case 'i':
				printf("%d", va_arg(word, int));
				break;
			case 'f':
				printf("%f", va_arg(word, double));
				break;
			case 's':
			{
				char *a = va_arg(word, char *);

				if (!a)
					a = "nill";
				printf("%s", a);
				break;
			}
			default:
				k = 1;
				break;
		}
		if (i < n - 1 && k == 0)
			printf(", ");
		i++;
	}
	va_end(word);
	printf("\n");
}
