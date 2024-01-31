#include "main.h"
/**
 * isInteger - checks whether a string is an integer only
 * @str: string to be checked
 * Return: boolean depending on the result
 */
int isInteger(const char *str)
{
	char *endptr;

	strtol(str, &endptr, 10);
	return (*endptr == '\0');
}
/**
 * main - finds the sum of arguments in the command line
 * @argc: the number of argunments in the command line
 * @argv: the array of argunments in the command line
 * Return: 0 if successful 1 if not
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		printf("0");
		return (0);
	}
	while (argv[i])
	{
		if (isInteger(argv[i]))
			j += atoi(argv[i]);
		else
		{
			printf("Error");
			return (1);
		}
		i++;
	}
	printf("%d", j);
	printf("\n");
	return (0);
}
