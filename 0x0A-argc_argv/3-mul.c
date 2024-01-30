#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: the number of argunments in the comman line
 * @argv: the array of integers in the command line
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
