#include "main.h"
#include "stdio.h"
/**
 * main - prints the number of arguments in a command line
 * @argc: the number of argumenst in the command line
 * @argv: the array of arguments
 * Return: 0 if success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
